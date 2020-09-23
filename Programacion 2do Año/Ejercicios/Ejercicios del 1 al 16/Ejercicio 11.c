/*Ejercicio 11*/
#include<stdio.h>
int main()
{
    int N,i,acum;
    printf("ingrese un numero natural N ");
    scanf("%d",&N);
    acum=0;
    for(i==0;i<=N;i++)
    {

        if((i%2)==0)
        {
          acum+=i;
        }
    }
    printf("%d es la suma de los primeros N numeros naturales",acum);
}
