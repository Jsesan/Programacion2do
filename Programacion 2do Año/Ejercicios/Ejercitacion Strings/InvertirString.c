#include "EjercitacionStringsHeader.h"
void InvertirString(char* ptrC)
{
    int i=0,j;
    char aux0;
    j=MYstrlen(ptrC);
    char* ptrx=(ptrC+j-1);
    printf("esto es *ptrC: %c \n",*ptrC);
    printf("esto es *ptrx: %c \n",*ptrx);
    while(ptrC<ptrx)
    {
        aux0=*(ptrC+i);
        *ptrC=*ptrx;
        *ptrx=aux0;
        ptrx--;
        ptrC++;
    }
}
