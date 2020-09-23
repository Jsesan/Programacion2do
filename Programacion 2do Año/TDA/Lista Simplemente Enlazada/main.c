#include "ListaSimple.h"
#include <stdio.h>
int main()
{
    tLista Lista;
    int aux;
    crearLista(&Lista);
    for(int i=0;i<10;i++)
    {
        ponerAlComienzo(&Lista,&i,sizeof(i));
    }
    for(int i=0;i<10;i++)
    {
        sacarPrimeroLista(&Lista,&aux,sizeof(aux));
        printf("%d ",aux);
    }
    return 0;
}
