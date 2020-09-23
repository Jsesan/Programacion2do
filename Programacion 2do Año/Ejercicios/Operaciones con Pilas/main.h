#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED

#define ERROR -1

#include "../../TDA/Pila Estatica/Pila_Estatica.h"
#include <stdio.h>
#include<string.h>
#include<stdlib.h>

int CargarPila(tPila *p,char *pointC);
void SumarPilas(tPila *pila1,tPila *pila2, tPila *Res);
#endif // MAIN_H_INCLUDED
