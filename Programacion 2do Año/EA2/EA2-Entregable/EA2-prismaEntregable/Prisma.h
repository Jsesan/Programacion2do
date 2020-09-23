/**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**/
/**//* 42.393.167-SESAN,JuanIgnacio-(06-2965) *//**/
/**//**   DEBE MODIFICAR LA L�NEA DE COMENTARIO ANTERIOR CON SUS DATOS   **//**/
/**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**/
/**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**/
/**//**//**         COMPLETE LA DECLARACI�N DE LA CLASE          **//**//**//**/

#ifndef PRISMA_H_
#define PRISMA_H_

#include <iostream>
#include <string>

using namespace std;

class Prisma
{
private:
    int alto;
    int ancho;
    int profundidad;
    string color;     /// <--preferentemente, de lo contrario:  char *color;
public:
    Prisma();
    Prisma(string, int, int);
    Prisma(string, int, int, int);
    Prisma(const Prisma &);
    //~Prisma();

    Prisma operator++(int);
    Prisma &operator =(const Prisma&);
    Prisma &operator--();

    friend ostream & operator<<(ostream &salida, const Prisma &);
    friend Prisma operator * (const int &i, const Prisma &obj);
};
#endif // PRISMA_H_

