//Ejercicio 36
#include "ProductoDeMat.h"
void ProductoDeMat(int mat[][TAM],int mat2[][TAM],int mat3[][TAM],int orden)
{
    int j,i,x;
    for(i=0;i<orden;i++)
    {
        for(x=0;x<orden;x++)
        {
            for(j=0;j<orden;j++)
            {
                if(i==x)
                {
                    mat3[i][x] += (mat[i][j] * mat2[j][i]);
                }
                else
                {
                    mat3[i][x] += (mat[i][j] * mat2[j][x]);
                }
            }
        }
    }
}
