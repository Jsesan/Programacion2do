#include "main.h"
//Main para int
void funcionmainenteros()
{
    printf("\n\t\t--------Enteros--------\n");
    int vector[]={4,8,10,2,5,9,7,1,3,6},ce=sizeof(vector)/sizeof(int);
    int* ptint=vector;
    //Mostrar vector sin ordenar
    printf("Vector sin ordenar: ");
    mostrarvec(vector,ce);
    //Ordenar por seleccion
    ord_selec_int(ptint,ce);
    //Mostrar Vector ordenado
    printf("\n");
    printf("Vector ordenado: ");
     mostrarvec(vector,ce);
}
void mostrarvec(int vec[],int ce)
{
    for(int i=0;i<ce;i++)
    {
        printf("%d ",vec[i]);
    }
}
//Con valor int
int* ord_selec_int(int* ptint,int ce)
{
    int* ini = ptint;
    int* men;
    int* fin= ptint+ce -1;
    while(ptint<fin)
    {
        men=buscar_men_elem(ptint,fin);
        if(ptint!=men)
            intercambiar_orden(ptint,men);
        ptint++;
    }
    return ini;
}
int* buscar_men_elem(int* ptint,int* fin)
{
    int* men= ptint;
    ptint++;
    while(ptint<=fin)
    {
        if(*ptint<*men)
            men = ptint;
        ptint++;
    }
    return men;
}
void intercambiar_orden(int* ptint,int* men)
{
    int aux= *ptint;
    *ptint = *men;
    *men = aux;
}
