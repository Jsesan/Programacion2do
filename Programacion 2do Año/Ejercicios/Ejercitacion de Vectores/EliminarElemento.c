#include "Ejercicio 22.h"
void EliminarElemento(int *ptrV,int val)
{
    int pos;

    do{
    pos= search1time(ptrV,val);
    EliminarPos(ptrV,pos);
    }while(pos!=(TAM+1));
}
