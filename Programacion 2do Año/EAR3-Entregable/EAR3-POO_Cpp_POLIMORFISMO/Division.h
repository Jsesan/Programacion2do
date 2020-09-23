/**//* 42.393.167-SESAN,JuanIgnacio-(06-2965) *//**/

#ifndef DIVISION_H_INCLUDED
#define DIVISION_H_INCLUDED

#include "Operador.h"
#include "DivisionPorCeroException.h"


class Division : public Operador
{
public:
    Division(float _operA = 0, float _operB = 1);
    float calcular();
    string operacion();
};


#endif // DIVISION_H_INCLUDED

