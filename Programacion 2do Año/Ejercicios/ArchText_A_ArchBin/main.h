#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct{
            int dni;
            char apyn[30];
            float promedio;
}t_estudiante;
int CargarArchivoTxtLongFija(char * path);
int CargarArchivoTxtLongVar(char * path);
int GuardarArchTxtLongFija_to_ArchBin(char * path,char * path1);
int GuardarArchTxtLongVar_to_ArchBin(char * path,char * path1);
#endif // MAIN_H_INCLUDED
