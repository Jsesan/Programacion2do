#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#define CANTOP 4
#define CANTELEM 10
int DesplegarMenu (char Opciones[CANTOP][60]);
float PromPosPares(float *PuntF,int cant);
void MostrarOrdenInv(float *PuntF,int cant);
int CargarVector(float *PuntF);
float minimoelemento(float *PuntF,int cant);
int CargarArchicoTxt(char * path,float *Punt,int cant);
#endif // MAIN_H_INCLUDED
