#include "ArchivoAlumnos.h"
void LeerAlumnos()
{
    FILE *pf;
    t_Alumno alum;
    int i=1,j=0;
    char Verificacion[2]={"si"};
    pf= fopen("ListaDeAlumnos.dat", "rb");
    while(Verificacion[0]=='s' && Verificacion[1]=='i')
    {
        fread(&alum, sizeof(t_Alumno), 1, pf);
        printf("Alumno numero %d\n",i);
        printf("DNI: %d \nApellido y Nombre: %s\nSexo: %c\nPromedio: %f\n",alum.dni,alum.apyn,alum.sexo,alum.promedio);
        MostrarNotas(alum.notas);
        printf("Desea leer otro alumno? (si/no): ");
        fflush(stdin);
        gets(Verificacion);
    }
    fclose(pf);
}
void MostrarNotas(int v[])
{
    int j=0;
    for(j=0;j<CANTNOTAS;j++)
    {
        if(v[j]!=0)
        {
          printf("Nota nro %d: %d\n",(j+1),v[j]);
        }
        else
        {
            return;
        }
    }
}
