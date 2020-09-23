#include "Ejercicio 22.h"
void InsertarEnPosVectorConPunteros (int v[],int pos,int val,int cantelem)
{
    int *ptrV=v;
    if(cantelem==TAM)
    {
        printf("El vector esta lleno \n");
        return;
    }
    for(cantelem;cantelem<TAM;cantelem++)
    {
        *(ptrV+pos)= val;
        break;
    }

}
