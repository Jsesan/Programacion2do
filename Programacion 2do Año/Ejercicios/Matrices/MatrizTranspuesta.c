//Ejercicio 34
#include "MatrizTranspuetsa.h"
void MatrizTranpuesta(int mat[][TAM],int orden)
{
    int i,j=0,aux;
    for(i=0;i<orden;i++)
    {
        for(;j<orden;j++)
        {
            aux = mat[i][j];
            mat[i][j] = mat[j][i];
            mat[j][i] = aux;
        }
        j=i+1;
    }
}
