/**//* 42.393.167-SESAN,JuanIgnacio-(06-2965) *//**/

#include "Triangulo.h"


Triangulo::Triangulo(double xbase,double xaltura)
{
    if(xbase<=0 || xaltura<=0)
        throw FiguraInvalidaException();
    base = xbase;
    altura = xaltura;
}

Triangulo::Triangulo()
{
    base = 1;
    altura = 1;
}


double Triangulo::area() const
{
	return (this->base * this->altura)/2;
}
