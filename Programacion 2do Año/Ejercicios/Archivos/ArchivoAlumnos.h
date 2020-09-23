#ifndef ARCHIVOALUMNOS_H_INCLUDED
#define ARCHIVOALUMNOS_H_INCLUDED
#define CANTNOTAS 10
#include <stdio.h>
typedef struct{
    int dni;
    char apyn[30];
    char sexo;
    float promedio;
    int notas[CANTNOTAS];
}t_Alumno;
void EscribirAlumnos();
void LeerAlumnos();
void obtenernotas(int v[]);
void MostrarNotas(int v[]);
#endif // ARCHIVOALUMNOS_H_INCLUDED
