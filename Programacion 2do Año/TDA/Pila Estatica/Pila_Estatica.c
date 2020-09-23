//Implementacion Funciones Pila Estatica (Primitivas)
#include "Pila_Estatica.h"
void crearpila(tPila *pila)
 {
     pila->tope = TAMPILA; //Inicializa la pila
 }
void vaciarpila(tPila *pila)
 {
     pila->tope= TAMPILA; //Mueve el tope hacia el "suelo" Aka vacia la pila
 }
int pilallena(const tPila *pila, unsigned tamdato)
{
    return pila->tope < tamdato + sizeof(unsigned);//verifica si la pila tiene espacio
}
int agregarelem(tPila *pila, const void *dato, unsigned tamdato)
{
    if(pila->tope< tamdato + sizeof(unsigned))//verifica si la pila tiene espacio
        return 0; //Pila llena
    pila->tope -= tamdato; //movemos tope para copiar la cant de bytes necesarios
    memcpy(pila->info + pila->tope, dato, tamdato);// Copiamos a pila->info el dato
    pila->tope-= sizeof(unsigned);//Movemos el tam de un unsigned para guardar tam dato en el vector
    memcpy(pila->info+pila->tope,&tamdato,sizeof(unsigned));//Copiamos tamdato
    return 1;//Retorno exitoso
}
int sacarelem(tPila *pila, void *dato, unsigned tamdato)
{
    if(pila->tope == TAMPILA)
        return 0; //Pila Vacia
    unsigned taminfo; //Variable auxiliar, contendra el tamdato para moverse sobre pila->info
    memcpy(&taminfo, pila->info + pila->tope, sizeof(unsigned));//Guardamos tam de dato en tam info
    pila->tope += sizeof(unsigned);//Movemos tope hacia donde se encuentra la info
    memcpy(dato, pila->info + pila->tope,MINIMO(tamdato,taminfo));//La  macro minimo define cuanto copiar el min entre ambos parametros y luego se copia en dato la info
    pila->tope += taminfo;//retrocede el tope
    return 1;//retorno exitoso
}
int pilavacia(const tPila *pila)
{
    return pila->tope == TAMPILA;
}
int vertope(tPila *pila,void *dato,unsigned tamdato)
{
    unsigned taminfo;
    if(pila->tope == TAMPILA)
        return 0;//Si la pila est vacio el tope es nulo
    memcpy(&taminfo,pila->info+pila->tope,sizeof(unsigned));//Guardamos cuanto vamos a leer y copiar
    memcpy(dato,pila->info+pila->tope+sizeof(unsigned),MINIMO(tamdato,taminfo));//Guardamos dato del tope
    return 1;// retorno exitoso
}
