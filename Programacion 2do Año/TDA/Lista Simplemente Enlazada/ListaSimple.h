#ifndef LISTASIMPLE_H_INCLUDED
#define LISTASIMPLE_H_INCLUDED

#include <string.h>
#include <stdlib.h>

typedef struct sNodo
{
    void *info;
    unsigned tamInfo;
    struct sNodo *sig;
} tNodo;

typedef tNodo *tLista;

void crearLista(tLista *p);

int listaVacia(const tLista *p);

int listaLlena(const tLista *p, unsigned cantBytes);

void vaciarLista(tLista *p);

int ponerAlComienzo(tLista *p, const void *d, unsigned cantBytes);

int sacarPrimeroLista(tLista *p, void *d, unsigned cantBytes);

int verPrimeroLista(const tLista *p, void *d, unsigned cantBytes);

int ponerAlFinal(tLista *p, const void *d, unsigned cantBytes);

int sacarUltimoLista(tLista *p, void *d,unsigned cantBytes);

int verUltimoLista(const tLista *p, void *d, unsigned cantBytes);

#endif // LISTASIMPLE_H_INCLUDED
