#ifndef PILA_ESTATICA_H_INCLUDED
#define PILA_ESTATICA_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAMPILA 340
#define MINIMO( X , Y ) ((X)<=(Y)?(X):(Y))

typedef struct{
    char info[TAMPILA];
    unsigned tope;
}tPila;
 int agregarelem(tPila *pila, const void *dato, unsigned tamdato);
 int sacarelem(tPila *pila, void *dato, unsigned tamdato);
 void crearpila(tPila *pila);
 int pilallena(const tPila *pila, unsigned tamdato);
 void vaciarpila(tPila *pila);
 int pilavacia(const tPila *pila);
 int vertope(tPila *pila,void *dato,unsigned tamdato);
#endif // PILA_ESTATICA_H_INCLUDED
