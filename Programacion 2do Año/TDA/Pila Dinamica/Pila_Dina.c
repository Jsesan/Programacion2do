#include "Pila_Dina.h"
int agregarelem(tPila *pila, const void *dato, unsigned tamdato)
{
    tNodo *nue;

    if((nue = (tNodo *) malloc(sizeof(tNodo))) == NULL
        ||
        (nue->info = malloc(tamdato)) == NULL)
    {
        free (nue);
        return 0;
    }
    memcpy(nue->info,dato,tamdato);
    nue->taminfo=tamdato;
    nue->sigNodo = * pila;
    *pila =  nue;
    return 1;
}
int sacarelem(tPila *pila, void *dato, unsigned tamdato)
{
    tNodo *aux = *pila;
    if(aux == NULL)
        return 0;
    *pila = aux->sigNodo;
    memcpy(dato,aux->info,MINIMO(tamdato,aux->taminfo));
    free(aux->info);
    free(aux);
    return 1;
}
void crearpila(tPila *pila)
{
  *pila = NULL;
}
int pilallena(const tPila *pila, unsigned tamdato)
{
   tNodo *aux = (tNodo *)malloc(sizeof(tNodo));
   void *info = malloc(tamdato);
   free (aux);
   free(info);
   return aux==NULL || info==NULL;
}
void vaciarpila(tPila *pila)
{
    while(*pila)
    {
        tNodo *aux = *pila;
        *pila = aux->sigNodo;
        free(aux->info);
        free(aux);
    }

}
int pilavacia(const tPila *pila)
{
    return *pila == NULL;
}
int vertope(tPila *pila,void *dato,unsigned tamdato)
{
    if(*pila == NULL)
        return 0;
    memcpy(dato,(*pila)->info,MINIMO(tamdato,(*pila)->taminfo));
    return 1;
}
