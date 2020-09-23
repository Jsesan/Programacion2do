#include "Ejercicio 22.h"
void EliminarPos(int* ptrv, int pos)
{
    if(pos>(TAM-1))
    {printf("Posicion fuera del vector ");
     return;
    }
    else
    {
        ptrv+=pos;
        for(pos;pos<TAM;pos++)
        {
            *ptrv= *(ptrv+1);
            ptrv++;
        }
    }
}
