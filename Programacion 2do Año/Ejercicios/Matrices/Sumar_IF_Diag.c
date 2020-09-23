//Ejercicio 29
#include "Sumar_IF_Diag.h"
#include "VoltearFilasMat.h"
#include "MostrarMatrizCuadr.h"
int SumarIfDiag(int mat[][TAM],int orden)
{
    int i=0,j=0,acum=0,cond;
    printf(" Si desea que Sumar Elementos por encima de la diag principal (sin incluir esta) ingrese 1 \n "); //Primera opcion
    printf("Si desea que Sumar Elementos por encima de la diag principal (incluyendo esta) ingrese 2 \n ");//Segunda opcion
    printf("Si desea que Sumar Elementos por encima de la diag secundaria (sin incluir esta) ingrese 3 \n ");//Tercera opcion
    printf("Si desea que Sumar Elementos por debajo de la diag principal (sin incluir esta) ingrese 4 \n ");//Cuarta opcion
    do{
    scanf("%d",&cond);
    }while(cond>4 && cond<1);
    if(cond==3)
    {
        VoltearFilasCuadr(mat,orden);
        MostrarMatrizCuadr(mat,orden);

    }

    for(i=0;i<orden;i++)
    {
        for(j=0;j<orden;j++)
        {
            if(cond==1 || cond==3)
            {
                if(j>i)
                    acum += mat[i][j];
            }
            else
            {
                if(cond==2)
                {
                    if(j>=i)
                    acum+=mat[i][j];
                }
                else
                {
                    if(i>j)
                    acum+=mat[i][j];
                }
            }
        }
    }
    return acum;
}
