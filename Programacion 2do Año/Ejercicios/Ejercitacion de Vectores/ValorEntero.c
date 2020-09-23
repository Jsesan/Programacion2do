#include "Ejercicio 22.h"
int ValorEntero(char *ptrI,int cant)
{
 int aux,acum=0,mult=1,aux1,i=0;
 for(i=(cant-1);i>=0;i--)
  {
    aux= *(ptrI+i) - 48;
    printf("aux=%d \n",aux);
    aux1= aux*mult;
    printf("aux1=%d \n",aux1);
    acum+=aux1;
    printf("acum=%d \n",acum);
    mult= mult*10;
    printf("mult=%d \n",mult);
 }
 return acum;
}
