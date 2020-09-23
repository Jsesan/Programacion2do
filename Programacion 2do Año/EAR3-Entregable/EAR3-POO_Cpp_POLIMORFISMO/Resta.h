/**//* 42.393.167-SESAN,JuanIgnacio-(06-2965) *//**/


#ifndef RESTA_H_INCLUDED
#define RESTA_H_INCLUDED

#include "Operador.h"

class Resta : public Operador
{
public:
    Resta(float _operA = 0, float _operB = 0);
    float calcular ();
    string operacion();
};


#endif // RESTA_H_INCLUDED

