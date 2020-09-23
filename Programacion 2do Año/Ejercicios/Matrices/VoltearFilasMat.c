#include "VoltearFilasMat.h"
void VoltearFilasCuadr(int mat[][TAM],int orden)
{
    int aux,x,i=0,j=0;

    for(i=0;i<orden;i++)
    {
        x=orden-1;
        for(j=0;x>j;j++)
        {
            aux= mat[i][x];
            mat[i][x]=mat[i][j];
            mat[i][j]=aux;
            x--;
        }
    }
}
