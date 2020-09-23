/*Ejercicio 7*/
#include <stdio.h>
int ClasNumerosNat(int);
int main()
{
    int tipo,N;
    printf("Ingresar un numero natural: ");
    scanf("%d",&N);
    tipo=ClasNumerosNat(N);
    if(tipo==1)
    {
        printf("N es un numero natural Perfecto");
    }
    else
    {
        if(tipo==2)
        {
            printf("N es un numero natural Deficiente");
        }
        else
        {
           printf("N es un numero natural Abundante");
        }
    }

}
int ClasNumerosNat(int N)
{
    int i,acum;
    i=1;
    acum=0;
    while(i<N)
    {
        if((N%i)== 0)
        {
           acum+=i;
        }
        i++;
    }
    if(acum==N)
    {
        return 1;
    }
    else
    {
        if(acum<N)
        {
          return 2;
        }
        else
        {
            return 3;
        }
    }
}
