/**//* 42.393.167-SESAN,JuanIgnacio-(06-2965) *//**/


#ifndef SUMA_H_INCLUDED
#define SUMA_H_INCLUDED

#include <string>
#include "Operador.h"

class Suma : public Operador
{
public:
    Suma(float _operA = 0, float _operB = 0);
    float calcular();
    string operacion();
};


#endif // SUMA_H_INCLUDED

