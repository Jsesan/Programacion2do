/**//* 42.393.167-SESAN,JuanIgnacio-(06-2965) *//**/


#ifndef OPERADOR_H_INCLUDED
#define OPERADOR_H_INCLUDED

#include <string>

using namespace std;

class Operador
{
private:
    float _operA;
    float _operB;
    string _operacion;
public:
    Operador(float _operA,float _operB);
    virtual float calcular() = 0;
    float getOperandoA();
    float getOperandoB();
    virtual string operacion() = 0;
    virtual ~Operador();
};
#endif // OPERADOR_H_INCLUDED

