/**//* 42.393.167-SESAN,JuanIgnacio-(06-2965) *//**/


#include "Resta.h"

Resta::Resta(float _operA, float _operB) : Operador(_operA,_operB){}

float Resta::calcular()
{
    return getOperandoA() - getOperandoB();
}

string Resta::operacion()
{
    return "RESTA";
}


/// complete la definición de la class


