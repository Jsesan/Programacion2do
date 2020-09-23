/**//* 42.393.167-SESAN,JuanIgnacio-(06-2965) *//**/

#ifndef FIGURAINVALIDAEXCEPTION_H_
#define FIGURAINVALIDAEXCEPTION_H_

#include "Figura.h"
#include <exception>
using namespace std;

class FiguraInvalidaException : public exception
{
    public:
        FiguraInvalidaException():exception() {}
        const char* what()  throw() {return "Figura invalida";};
};





#endif // FIGURAINVALIDAEXCEPTION_H_
