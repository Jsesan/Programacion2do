#include "Pila_Dina.h"
int main()
{
    //Prueba de TDA pila
    tPila pila;
    int dato;
    crearpila(&pila);
    for(int i=0;i<10;i++)
    {
            if(!agregarelem(&pila,&i,sizeof(int)))
            {
                printf("ERROR: PILA LLENA");
                return 0;
            }
            if(!vertope(&pila,&dato,sizeof(int)))
            {
                printf("ERROR: PILA VACIA");
                return 0;
            }
            printf("/%d/",dato);
    }
    printf("\n");
    for(int j=0;j<10;j++)
    {
            if(!sacarelem(&pila,&dato,sizeof(int)))
            {
                printf("ERROR: PILA VACIA");
                return 0;
            }
            printf("-%d-",dato);
    }

    return 0;
}
