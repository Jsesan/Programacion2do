#include <stdio.h>
#include <stdlib.h>
#include "EjercitacionStringsHeader.h"
int main()
{
  char v[]=" SesAN LORENZO francisco,      NahuEL",*ptrC=v;
    FormatearNom(ptrC);
    printf("Nombre=%s",v);
    return 0;
}
