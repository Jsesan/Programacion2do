/**//* 42.393.167-SESAN,JuanIgnacio-(06-2965) *//**/

#include "funciones.h"


/**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**/
/**//* FUNCIONES A DESARROLLAR                                            *//**/
/**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**/
/**//**//**//* PUNTO 2                                            *//**//**//**/

int  cargarCuadrMagico_MIO(int m[][TAM_MAT], int filas, int colum)
{
    int valor=1,i=0,j=(colum/2),orden=filas;
    while(valor<=(filas*colum))
    {

        m[i][j]=valor;
        if((valor%orden)!= 0)
        {
            i--;
            j++;
        }
        else
        {
           i++;
        }
        if(i>orden-1)
            i=0;
        if(i<0)
            i=orden-1;

        if(j>orden-1)
            j=0;

        valor++;
    }
    return 1;
}


int mostrarMat_MIO(int m[][TAM_MAT], int filas, int colum, FILE *fp)
{
    int i,j,sumfila,sumcolum,diagP=0,diagS=0;

    for(i=0;i<filas;i++)
    {
        sumfila=0;
        for(j=0;j<colum;j++)
        {
            sumfila += m[i][j];
            sumcolum += m[j][i];
            fprintf(fp,"%5d",m[i][j]);
        }
        diagP += m[i][i];
        diagS += m[i][colum-i-1];
        fprintf(fp," %5d\n",sumfila);

    }
    fprintf(fp,"\n");
    for(i=0;i<filas;i++)
    {
        sumcolum=0;
        for(j=0;j<colum;j++)
        {
            sumcolum += m[j][i];
        }
        fprintf(fp,"%5d",sumcolum);
    }
    fprintf(fp," %5d%5d\n",diagP,diagS);



    return 1;
}


/**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**/

