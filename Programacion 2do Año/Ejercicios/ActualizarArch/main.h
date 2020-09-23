#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
typedef struct{
            int dni;
            char apellido[20];
            char nombre[15];
            double sueldo;
}t_empleado;
typedef struct{
            int dni;
            char apellido[20];
            char nombre[15];
            float promedio;
}t_estudiante;
int CargarArch1(char * path);
int CargarArch2(char * path);


#endif // MAIN_H_INCLUDED
