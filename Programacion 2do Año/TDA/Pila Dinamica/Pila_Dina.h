#ifndef PILA_DINA_H_INCLUDED
#define PILA_DINA_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MINIMO( X , Y ) ((X)<=(Y)?(X):(Y))
typedef struct sNodo{
    void *info;
    unsigned taminfo;
    struct sNodo *sigNodo;
}tNodo;

typedef tNodo *tPila;

int agregarelem(tPila *pila, const void *dato, unsigned tamdato);
int sacarelem(tPila *pila, void *dato, unsigned tamdato);
void crearpila(tPila *pila);
int pilallena(const tPila *pila, unsigned tamdato);
void vaciarpila(tPila *pila);
int pilavacia(const tPila *pila);
int vertope(tPila *pila,void *dato,unsigned tamdato);

#endif // PILA_DINA_H_INCLUDED
