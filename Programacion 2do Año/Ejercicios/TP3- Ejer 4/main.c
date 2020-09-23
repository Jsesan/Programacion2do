#include "main.h"
int main()
{
    FILE *data;
    tPila pila;
    crearpila(&pila);
    tpersona persona;
    char Op;
    tpersona dato,personas[3]={{42393167,"Se J"},
                                {4200000,"cccc dddd"},
                                {4300000,"aaaa bbbb"}
    };
    data=fopen("Datos.dat","wb");
    fwrite(personas,sizeof(personas),1,data);
    fclose(data);
    if(!CargarArchAPila("Datos.dat",&pila))
    {
       printf("ERROR EN CARGA DE DATOS");
       return -1;
    }

    do{
            Op= MenuDesplegable("//Elija una Opcion// \n"
                                "A- Agregar al tope \n"
                                "Q- Quitar del tope \n"
                                "V- Ver el tope \n"
                                "S- Salir \n"
                                "-->",
                                "AQVS");
                        switch(Op)
                        {
                        case 'A':
                            printf("Datos de la persona a agregar...\n DNI:");
                            scanf("%d",&dato.dni);
                            fflush(stdin);
                            printf("Apellido y Nombre:");
                            scanf("%s",dato.nya);
                            agregarelem(&pila,&dato,sizeof(tpersona));
                            break;
                        case 'Q':
                            //Quitar
                            sacarelem(&pila,&dato,sizeof(tpersona));
                            break;
                        case 'V':
                            //Ver tope
                            vertope(&pila,&persona,sizeof(tpersona));
                            printf("/Tope:/ \n/%d %s /",persona.dni,persona.nya);
                            break;
                        case 'S':
                            break;
                        }
    }while(Op != 'S');
    if(pilavacia(&pila))
        {
            printf("Archivo Vacio, se procedera a eliminar...");
            remove("Datos.dat");
            return 0;
        }
    if(!ActualiarArch("Datos.dat",&pila))
        printf("ERROR AL ACTUALIZAR");
    return 0;
}
char MenuDesplegable(const char *opciones, const char *correctas)
{
    char op;
    do{
        printf("%s",opciones);
        fflush(stdin);
        scanf("%c",&op);
    }while(strchr(correctas,op)== NULL);
    return op;
}
int CargarArchAPila(char * path,tPila *pila)
{
    tpersona persona;
    FILE *archivo;
    archivo=fopen(path,"rb");
    while(!feof(archivo))
    {
        fread(&persona,sizeof(tpersona),1,archivo);
        agregarelem(pila,&persona,sizeof(tpersona));
    }

    fclose(archivo);
    return 1;
}
int ActualiarArch(char * path,tPila *pila)
{
    tpersona persona;
    FILE *archivo;
    archivo=fopen(path,"wb");
        while(!pilavacia(pila))
        {
            sacarelem(pila,&persona,sizeof(tpersona));
            fwrite(&persona,sizeof(tpersona),1,archivo);
        }

        fclose(archivo);
        return 1;

}
