#include "Ejercicio 22.h"
void InsertaryOrdenarVectorAscendente(int v[])
{
    int n,i,aux,aux2;
        printf("Valor que desee ingresar al Array: ");
        scanf("%d",&n);
        for(i=0;i<TAM;i++)
        {
            if(v[i]<n && n<=v[i+1])
            {
                aux=v[i+1];
                v[i+1]=n;
                for(i;i<TAM;i++)
                {
                    aux2=v[i+2];
                    v[i+2]=aux;
                    aux=aux2;
                }
                break;
            }
            else
            {
                if(n<v[0])
                {
                    v[0]=n;
                    break;
                }
                if(n>v[TAM-1])
                {
                    v[TAM-1]=n;
                    break;
                }
            }
        }

}
