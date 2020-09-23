/**//* 42.393.167-SESAN,JuanIgnacio-(06-2965) *//**/

#ifndef RECTANGULO_H_
#define RECTANGULO_H_

#include "Figura.h"

class Rectangulo : public Figura
{
	private:
		double ladoA;
		double ladoB;

	public:
		Rectangulo(double ladoA,double ladoB);
		Rectangulo();
		double area() const;
};






#endif // RECTANGULO_H_
