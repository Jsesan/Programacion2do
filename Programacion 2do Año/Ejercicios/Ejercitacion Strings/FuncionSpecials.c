#include "EjercitacionStringsHeader.h"
void Fspecial(char* ptrC)
{
    int i,cant,x,j=0;
    char aux0,aux1;
    cant=MYstrlen(ptrC);
    for(i=0;i<cant;i++)
    {
        if(*(ptrC+i)==',')
        {
            return;
        }
    }
    do{
        if(*(ptrC+j+1)==' ')
        {
            aux0=*(ptrC+j+1);
            *(ptrC+j+1)=',';
            for(x=j+2;x<cant;x++)
            {
                aux1=*(ptrC+x);
                *(ptrC+x)=aux0;
                aux0=aux1;
            }
            return;
        }
    j++;
    }while(*(ptrC+j)!=' ');
}
