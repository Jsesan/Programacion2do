#include "MostrarMatrizCuadr.h"
void MostrarMatrizCuadr(int mat[][TAM],int orden)
{
    int i,j;
    for(i=0;i<orden;i++)
    {
        for(j=0;j<orden;j++)
        {
            printf(" %d",mat[i][j]);
        }
        printf("\n");
    }
}
