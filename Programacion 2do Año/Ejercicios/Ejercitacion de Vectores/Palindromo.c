#include "Ejercicio 22.h"
#include "EjercitacionStringsHeader.h"
int Palindromo(char *ptrC,int cant)
{
    int i;
    for(i=0;i<cant;i++)
    {
        if(*(ptrC+i) != *(ptrC+cant-1-i))
        {
            printf("se corta con i: %d",i);
            return FALSE;
        }
    }
    return TRUE;
}
