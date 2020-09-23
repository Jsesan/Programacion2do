#include "Traza.h"
#include "VoltearFilasMat.h"
#include "MostrarMatrizCuadr.h"
int TrazaDeMat(int mat[][TAM],int orden)
{
    int cond,acum=0,i,j;
    printf(" Si quiere la traza de la diagonal principal ingrese 1 \n "); //Primera opcion
    printf("Si quiere la traza de la diagonal secundaria ingrese 2 \n ");//Segunda opcion
    do{
        scanf("%d",&cond);
    }while(cond>2 && cond<1);
    if(cond==1)
    {
    for(i=0;i<orden;i++)
    {
        for(j=0;j<orden;j++)
        {
          if(i==j)
          {
              acum += mat[i][j];
          }
        }
    }
    }
    else
    {
     VoltearFilasCuadr(mat,orden);
     MostrarMatrizCuadr(mat,orden);
     for(i=0;i<orden;i++)
    {
        for(j=0;j<orden;j++)
        {
          if(i==j)
          {
              acum += mat[i][j];
          }
        }
    }
    }
    return acum;
}
