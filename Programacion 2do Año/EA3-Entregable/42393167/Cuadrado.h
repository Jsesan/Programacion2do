/**//* 42.393.167-SESAN,JuanIgnacio-(06-2965) *//**/

#ifndef CUADRADO_H_
#define CUADRADO_H_

#include "Figura.h"

class Cuadrado : public Figura
{
	private:
		double lado;

	public:
		Cuadrado(double lado);
		Cuadrado();
		double area() const;
};





#endif // CUADRADO_H_
