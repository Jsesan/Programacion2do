#include "EjercitacionStringsHeader.h"
int MYstrlen(char* ptrC)
{
    int i=0;
    while(*(ptrC+i)!=0)
    {
        i++;
    }
    return i;
}
