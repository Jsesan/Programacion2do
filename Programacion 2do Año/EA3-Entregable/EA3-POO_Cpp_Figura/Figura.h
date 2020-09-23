/**//* 42.393.167-SESAN,JuanIgnacio-(06-2965) *//**/

#ifndef FIGURA_H_
#define FIGURA_H_

#include "FiguraInvalidaException.h"

class Figura
{
	public:
	    //Destructor
	    virtual ~Figura();
	    //Metodos
		virtual double area() const = 0;
};




#endif // FIGURA_H_
