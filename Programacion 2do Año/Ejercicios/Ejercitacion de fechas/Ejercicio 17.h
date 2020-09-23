#ifndef EJERCICIO_17_H_INCLUDED
#define EJERCICIO_17_H_INCLUDED

#include <stdio.h>
typedef struct{ int dia;
                int mes;
                int anio;
                }tfecha;
int VerificarFecha(tfecha);
void RestarNDias(tfecha,int);

#endif // EJERCICIO_17_H_INCLUDED
