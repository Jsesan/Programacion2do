/**//* 42.393.167-SESAN,JuanIgnacio-(06-2965) *//**/


#include "Division.h"

Division::Division(float _operA, float _operB) : Operador(_operA,_operB)
{
    if(_operB==0)
        throw DivisionPorCeroException();
}

float Division::calcular()
{
    return getOperandoA() / getOperandoB();
}

string Division::operacion()
{
    return "DIVISION";
}

/// complete la definición de la class


