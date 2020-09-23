#include "CopiarUnaMatriz.h"
void CopiarUnaMat(int mat[][TAM],int mat2[][TAM],int orden)
{
    int i,j;
    for(i=0;i<orden;i++)
    {
        for(j=0;j<orden;j++)
        {
            mat2[i][j] = mat[i][j];
        }
    }
}
