/**//* 42.393.167-SESAN,JuanIgnacio-(06-2965) *//**/

#include "Rectangulo.h"

Rectangulo::Rectangulo(double A_lado,double B_lado)
{
    if(A_lado<=0 || B_lado<=0)
        throw FiguraInvalidaException();
    ladoA = A_lado;
    ladoB = B_lado;
}

Rectangulo::Rectangulo()
{
    ladoA = 1;
    ladoB = 1;
}


double Rectangulo::area() const
{
	return this->ladoA * this->ladoB;
}

