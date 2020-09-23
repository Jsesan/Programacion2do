/**//* 42.393.167-SESAN,JuanIgnacio-(06-2965) *//**/

#ifndef DIVISIONPORCEROEXCEPTION_H_INCLUDED
#define DIVISIONPORCEROEXCEPTION_H_INCLUDED

#include <exception>

using namespace std;

class DivisionPorCeroException : public exception
{
    public:
    DivisionPorCeroException():exception() {}
    const char* what()  throw() {return "Division por cero";};
};


#endif // DIVISIONPORCEROEXCEPTION_H_INCLUDED

