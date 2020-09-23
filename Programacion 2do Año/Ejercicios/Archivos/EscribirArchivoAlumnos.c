#include "ArchivoAlumnos.h"
void EscribirAlumnos()
{
    FILE *pf;
    t_Alumno alum;
    char Verificacion[2]={"si"};
    pf= fopen("ListaDeAlumnos.dat", "wb");
    while(Verificacion[0]=='s' && Verificacion[1]=='i')//Cargamos datos mientras la condicion sea "si"
    {
        fflush(stdin);
        printf("Cargar DNI: ");
        scanf("%d",&alum.dni);
        printf("Apellido y Nombre: ");
        fflush(stdin);
        gets(alum.apyn);
        printf("Sexo: ");
        fflush(stdin);
        scanf("%c",&alum.sexo);
        printf("Promedio: ");
        fflush(stdin);
        scanf("%f",&alum.promedio);
        printf("Notas: ");
        obtenernotas(alum.notas);
        fwrite(&alum,sizeof(t_Alumno),1, pf);
        printf("Si desea cargar otro alumno ingrese 'si'\nEn caso contrario ingrese 'no'\n");
        fflush(stdin);
        gets(Verificacion);
    }
    fclose(pf);
}
void obtenernotas(int v[])
{
    int i=0;
    printf("Ingrese la primera nota: ");
    fflush(stdin);
    scanf("%d",&v[i]);
    while(v[i]!=0 || i==CANTNOTAS)
    {
        i++;
        printf("Ingrese la siguiente (si no desea ingresar mas notas ingrese 0): ");
        fflush(stdin);
        scanf("%d",&v[i]);
    }
}
