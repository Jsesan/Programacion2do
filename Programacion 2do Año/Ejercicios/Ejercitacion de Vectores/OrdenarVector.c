#include "Ejercicio 22.h"
void OrdenarVector(int v[])
{
    int hubocambio,i,aux,x,valor;
    printf("Si quiere ordenar de manera ascendente ingrese 1, para ordenar de forma descendente ingrese cualquier valor: ");
    scanf("%d",&valor);
    if(valor==1) /*con valor=1 el orden sera ascendente de otra manera sera descendente*/
    {
     do{
            hubocambio=0;
            for(i=0;i<TAM-1;i++)
            {
                for(x=i+1;x<TAM;x++)
                {
                if(v[i]>v[x])
                {
                    aux=v[i];
                    v[i]=v[x];
                    v[x]=aux;
                    hubocambio=1;
                }
                }
            }

     }while(hubocambio==1);
    }
    else
    {
        do{
            hubocambio=0;
            for(i=0;i<TAM-1;i++)
            {
                for(x=i+1;x<TAM;x++)
                {
                if(v[i]<v[x])
                {
                    aux=v[i];
                    v[i]=v[x];
                    v[x]=aux;
                    hubocambio=1;
                }
                }
            }

     }while(hubocambio==1);

    }
}
