/**//* 42.393.167-SESAN,JuanIgnacio-(06-2965) *//**/

#include "Cuadrado.h"

Cuadrado::Cuadrado(double xlado)
{
    if(xlado<=0)
        throw FiguraInvalidaException();
    lado = xlado;
}

Cuadrado::Cuadrado()
{
    lado = 1;
}


double Cuadrado::area() const
{
	return this->lado * this->lado;
}
