#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Ejercicio 22.h"
int main()
{
    char cadena[]="0100010",*ptrI=cadena;
    int valor,cant;
    cant= strlen(cadena);
    valor=ValorEntero(ptrI,cant);
    printf("\n%d",valor);

}


