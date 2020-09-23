#include "Cola_Estatica.h"
#define MINIMO( X , Y )     ((X) <= (Y) ? (X) : (Y))
void crearCola(tCola *p)
{
    p->pri = TAM_COLA - 70;
    p->ult = TAM_COLA - 70;
    p->tamDisp = TAM_COLA;
}
int colaLlena(const tCola *p, unsigned cantBytes)
{
    return p->tamDisp < cantBytes + sizeof(unsigned);
}
int ponerEnCola(tCola *p, const void *d, unsigned cantBytes)
{
    unsigned ini,fin;
    if(p->tamDisp < sizeof(unsigned)+cantBytes)
        return 0;
    p->tamDisp -= sizeof(unsigned) + cantBytes;
    if((ini = MINIMO(sizeof(cantBytes), TAM_COLA - p->ult)) != 0)
        memcpy(p->cola + p->ult, &cantBytes, ini);
    if((fin = sizeof(cantBytes)-ini) != 0)
        memcpy(p->cola,((char *)&cantBytes)+ini,fin);
    p->ult = fin ? fin : p->ult + ini;
    if((ini = MINIMO(cantBytes, TAM_COLA - p->ult)) != 0)
        memcpy(p->cola + p->ult, d, ini);
    if((fin = cantBytes - ini) !=0)
        memcpy(p->cola, ((char *)d) + ini, fin);
    p->ult = fin ? fin : p->ult + ini;
    return 1;

}
int verPrimeroCola(const tCola *p, void *d,unsigned cantBytes)
{
    unsigned taminfo, ini, fin, pos= p->pri;
    if(p->tamDisp == TAM_COLA)
        return 0;

}
int colaVacia(const tCola *p);
int sacarDeCola(tCola *p,void *d, unsigned cantBytes);
void vaciarCola(tCola *p);
