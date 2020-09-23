#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include "../../TDA/Pila Estatica/Pila_Estatica.h"
typedef struct{
    int dni;
    char nya[30];
}tpersona;
int CargarArchAPila(char * path,tPila *pila);
char MenuDesplegable(const char *opciones, const char *correctas);
int ActualiarArch(char * path,tPila *pila);

#endif // MAIN_H_INCLUDED
