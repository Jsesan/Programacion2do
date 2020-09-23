//Ejercicio 32
#include "MatrizIdentidad.h"
int MatrizIdentidad(int mat[][TAM],int orden)
{
    int i,j,p=0;
    for(i=0;i<orden;i++)
    {
        for(j=0;j<orden;j++)
        {
            if(i==j && (mat[i][j]!= 1))
               return FALSE;
            if(i!=j && (mat[i][j]!=0))
                return FALSE;
        }
    }
    return TRUE;
}
