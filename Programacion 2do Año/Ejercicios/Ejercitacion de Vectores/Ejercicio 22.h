#ifndef EJERCICIO_22_H_INCLUDED
#define EJERCICIO_22_H_INCLUDED
#include<stdio.h>
#define TAM 10
#define TRUE 1
#define FALSE 0
void InsertarEnPosVector(int[],int);
void InsertaryOrdenarVectorAscendente(int[]);
void OrdenarVector (int[]);
void InsertarEnPosVectorConPunteros(int[],int,int,int);
void EliminarPos(int *ptrV,int);
int search1time(int *ptrV,int val);
void EliminarElemento(int *ptrV,int val);
int Palindromo(char *ptrC,int cant);
int ElementosString(char *ptrC);
int ValorEntero(char* PtrI,int cant);
#endif // EJERCICIO_22_H_INCLUDED

