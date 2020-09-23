#include "EjercitacionStringsHeader.h"
#include <stdio.h>
void palindromo2(char* ptrC)
{
    int cant=0;
    cant=MYstrlen(ptrC);
    char* ptrX=(ptrC+cant-1);
    printf("esto es *ptrC: %c \n",*ptrC);
    printf("esto es *ptrx: %c \n",*ptrX);
    while(ptrX>ptrC)
    {
        if(*ptrC!=*ptrX)
        {
            printf("NO ES PALINDROMO");
            return;
        }
        ++ptrC;
        --ptrX;
    }
    printf("ES PALINDROMO");
    return;
}
