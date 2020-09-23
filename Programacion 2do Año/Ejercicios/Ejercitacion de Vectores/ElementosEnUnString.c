#include "Ejercicio 22.h"
int ElementosString(char *ptrC)
{
    int i;
    for(i=0;i<TAM;i++)
    {
        if(*(ptrC+i)==0)
        {
            return i;
        }
    }
}
