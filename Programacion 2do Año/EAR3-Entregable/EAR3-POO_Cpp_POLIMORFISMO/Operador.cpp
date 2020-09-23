/**//* 42.393.167-SESAN,JuanIgnacio-(06-2965) *//**/

#include "Operador.h"

Operador::Operador(float _operA,float _operB)
{
    this->_operA = _operA;
    this->_operB = _operB;
}

float Operador::getOperandoA()
{
    return _operA;
}

float Operador::getOperandoB()
{
    return _operB;
}

Operador::~Operador()
{

}


