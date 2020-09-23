//Ehercicio 33
#include "MatrizSimetrica.h"
int MatrizSimetrica(int mat[][100],int orden)
{
    int i,j;
    for(i=0;i<orden;i++)
    {
        for(j=0;j<orden;j++)
        {
            if(mat[i][j]!= mat[j][i])
                return FALSE;
        }
    }
    return TRUE;
}
