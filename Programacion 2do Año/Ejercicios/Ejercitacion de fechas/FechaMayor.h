#ifndef FECHAMAYOR_H_INCLUDED
#define FECHAMAYOR_H_INCLUDED
typedef struct{ int dia;
                int mes;
                int anio;
                }tfecha;
int FechaMayor(tfecha,tfecha);
int FechaMayorMes(tfecha,tfecha);
int FechaMayorDia(tfecha,tfecha);
#endif // FECHAMAYOR_H_INCLUDED
