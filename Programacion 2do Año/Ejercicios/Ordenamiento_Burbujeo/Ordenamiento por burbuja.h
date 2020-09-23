#ifndef ORDENAMIENTO_POR_BURBUJA_H_INCLUDED
#define ORDENAMIENTO_POR_BURBUJA_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct {
                int dni;
                char nombre[15]
}alumnos;
int* Ord_Burbuja(int *punt,int ce);
void intercambio(int *p,int *a);
void* Ord_Burbuja_gen(void *punt,size_t ce,size_t tam,int (*cmp)(const void *, const void *));
void intercambio_gen(void* p,void* a,size_t tam);
int cmp_int(const int *a,const int *b);
float cmp_float(const float *a,const float *b);
#endif
