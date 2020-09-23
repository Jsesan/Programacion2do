#ifndef FECHAMENOR_H_INCLUDED
#define FECHAMENOR_H_INCLUDED
typedef struct{ int dia;
                int mes;
                int anio;
                }tfecha;
int FechaMenor(tfecha,tfecha);
int FechaMenorMes(tfecha,tfecha);
int FechaMenorDia(tfecha,tfecha);
#endif // FECHAMENOR_H_INCLUDED
