#ifndef PILA_DINAMICA_CIRCULAR_H_INCLUDED
#define PILA_DINAMICA_CIRCULAR_H_INCLUDED
#include <stdlib.h>
#include <string.h>

#define minimo( X , Y )         ( ( X ) <= ( Y ) ? ( X ) : ( Y ) )

typedef struct sNodo
{
    void    *info;
    unsigned tamInfo;
    struct sNodo *sig;
}tNodo;
typedef tNodo *tPila;

void crearPila(tPila *p);
int pilaLlena (const tPila *p, unsigned cantBytes);
int ponerEnPila(tPila *p, const void *d, unsigned cantBytes);
int verTope(const tPila *p, void *d, unsigned cantBytes);
int pilaVacia(const tPila *p);
int sacarDePila(tPila *p,void *d, unsigned cantBytes);
void vaciarPila(tPila *p);
#endif // PILA_DINAMICA_CIRCULAR_H_INCLUDED
