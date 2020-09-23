//Ejercicio 31
#include "MatrizDiagonal.h"
int MatrizDiagonal(int mat[][TAM],int orden)
{
    int i,j;
    for(i=0;i<orden;i++)
    {
        for(j=0;j<orden;j++)
        {
           if(i!=j && mat[i][j]!=0)
           {
               return FALSE;
           }

        }
    }
    return TRUE;
}
