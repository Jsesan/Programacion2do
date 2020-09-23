//Ejercicio 37
#include "EjercicioDelTorneo.h"
int VerificarCondicionesDelTorneo(int mat[][TAM],int orden)
{
    int j,i;
    for(i=0;i<orden;i++)
    {
        for(j=0;j<orden;j++)
        {
            if(i==j && (mat[i][j]!= 0))
                    return FALSE;
            if(i!=j && mat[i][j]>3)
                    return FALSE;
            if(i!=j && mat[i][j]<0)
                    return FALSE;
            if(i!=j && mat[i][j]==2)
                    return FALSE;

        }
    }
    return TRUE;
}
void PuntosXTeam(int mat[][TAM],int v[])
{
    int i,j;
    for(i=0;i<ORDEN;i++)
    {
        for(j=0;j<ORDEN;j++)
        {
            v[i] += mat[i][j];
        }
    }
}
