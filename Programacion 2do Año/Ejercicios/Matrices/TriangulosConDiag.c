#include "TriangulosConDiagonales.h" //Los #define se encuentran en cabecera, los dejo como comentario en su primer llamado
void TriangulosConDiagonales(int mat[][TAM],int orden)
{
    int cond,i,j,p=0,DiagSec=orden-1;
    printf(" Si desea el triangulo  que se forma a la izquierda de las diagonales principal y secundaria. ingrese 1 \n "); //Primera opcion
    printf("Si desea el triangulo que se forma a arriba de las diagonales principal y secundaria. ingrese 2 \n ");//Segunda opcion
    printf("Si desea el triangulo que se forma abajo de las diagonales principal y secundaria.  ingrese 3 \n ");//Tercera opcion
    printf("Si desea el triangulo que se forma a la derecha de las diagonales principal y secundaria. ingrese 4 \n ");//Cuarta opcion
    do{
        scanf("%d",&cond);
    }while(cond>4 || cond<1);
    for(i=0;i<orden;i++)
    {
        for(j=0;j<orden;j++)
        {
            if(cond==1)
            {
                if(IZQ(j,DiagSec,p)==1) //#define IZQ(J,DIAGSEC,P) ((J)<(DIAGSEC)&&(J)<(P)? 1 : 0)
                {
                   printf("%d",mat[i][j]);
                }
                else
                {
                   printf(" ");
                }
            }
            else
            {
                if(cond==2)
                {
                    if(SUP(j,DiagSec,p)==1)//#define SUP(J,DIAGSEC,P) ((J)<(DIAGSEC)&&(J)>(P)? 1 : 0)
                    {
                       printf("%d",mat[i][j]);
                    }
                    else
                    {
                       printf(" ");
                    }

                }
                else
                {
                    if(cond==3)
                    {
                        if(INF(j,DiagSec,p)==1)//#define INF(J,DIAGSEC,P) ((J)>(DIAGSEC)&&(J)<(P)? 1 : 0)
                        {
                           printf("%d",mat[i][j]);
                        }
                        else
                        {
                           printf(" ");
                        }
                    }
                    else
                    {
                            if(DER(j,DiagSec,p)==1)//#define DER(J,DIAGSEC,P) ((J)>(DIAGSEC)&&(J)>(P)? 1 : 0)
                            {
                               printf("%d",mat[i][j]);
                            }
                            else
                            {
                               printf(" ");
                            }
                    }
                }
            }
        }
        printf("\n");
        DiagSec--;
        p++;
    }
}
