/**//* 42.393.167-SESAN,JuanIgnacio-(06-2965) *//**/


#include "Suma.h"

Suma::Suma(float _operA, float _operB) : Operador(_operA,_operB)
{

}

float Suma::calcular()
{
    return getOperandoA() + getOperandoB();
}

string Suma::operacion()
{
    return "SUMA";
}

/// complete la definición de la class


