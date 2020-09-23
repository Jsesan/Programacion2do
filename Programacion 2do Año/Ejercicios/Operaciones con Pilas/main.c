#include "main.h"
int main()
{
    char num1[]={'3','5','6','7','8','9','0','1','2','6','4','3','8','6','6','6','6','6','6','6','6','6','6','6','6','6','6','6','6','6','0'},
         num2[]={'3','5','6','7','8','9','0','1','2','6','4','3','8','6','6','6','6','6','6','6','6','6','6','6','6','6','6','6','6','6'};


        tPila Pnum1,Pnum2,Resultado;
        char *pointerC1=num1,*pointerC2=num2,i;
        crearpila(&Pnum1);
        crearpila(&Pnum2);
        crearpila(&Resultado);
        if(!CargarPila(&Pnum1,pointerC1))
        {
            printf("ERROR EN LA CARGA DE PILA 1");
            return ERROR;
        }

        if(!CargarPila(&Pnum2,pointerC2))
        {
            printf("ERROR EN LA CARGA DE PILA 2");
            return ERROR;
        }

        SumarPilas(&Pnum1,&Pnum2,&Resultado);
        printf("%s\n+\n%s\n--------------------------------\n",num1,num2);
        while(!pilavacia(&Resultado))
        {
            if(!sacarelem(&Resultado,&i,sizeof(char)))
            {
                return ERROR;
            }
            printf("%c",i);
        }

    return 0;
}
int CargarPila(tPila *p,char * PointerC)
{
    int i=0,tam=sizeof(char);
    while(*(PointerC+i)!= 0)
    {
        if(!agregarelem(p,(PointerC+i),sizeof(char)))
        {
            return 0;
        }
        i+=tam;
    }
    return 1;
}
void SumarPilas(tPila *pila1,tPila *pila2, tPila *Res)
{
    int resto=0,sum=0,valor1,valor2;
    char Cvalor1,Cvalor2,answ;
    while(!pilavacia(pila1)||!pilavacia(pila2))
    {
        if(!pilavacia(pila1) && !pilavacia(pila2))
        {
                sacarelem(pila1,&Cvalor1,sizeof(char));
                sacarelem(pila2,&Cvalor2,sizeof(char));
                valor1= Cvalor1-'0';
                valor2= Cvalor2-'0';
                sum= valor1 + valor2 + resto;
        }
        else
        {
        if(pilavacia(pila1))
        {
                sacarelem(pila2,&Cvalor2,sizeof(char));
                valor2= Cvalor2-'0';
                sum= valor2 + resto;

        }
        else
        {
                 sacarelem(pila1,&Cvalor1,sizeof(char));
                 valor1=Cvalor1-'0';
                 sum= valor1 + resto;

        }
        }
            if(sum >= 10)
            {
                sum= sum - 10;
                answ= sum +'0';
                agregarelem(Res,&answ,sizeof(char));
                resto=1;
            }
            else
            {
                answ= sum +'0';
                agregarelem(Res,&answ,sizeof(char));
                resto=0;
            }
    }
}
