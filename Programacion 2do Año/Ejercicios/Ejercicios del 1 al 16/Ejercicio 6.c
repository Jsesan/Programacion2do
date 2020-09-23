/*Ejercicio 6*/
#include <stdio.h>
int potencia(int,int);
float senodeequis(int,int);
double Factorial (int);
int main()
{
    int x,TOL;
    float senx;
    printf("Ingrese el nro del que quiera calcular el seno: ");
    scanf("%d",&x);
    printf("Ingrese el TOL: ");
    scanf("%d",&TOL);
    senx= senodeequis(x,TOL);
    printf("El seno de la x elegido es: %f",senx);
}
int potencia(int x,int expo)
{
    int i,pot;
    i=1;
    pot=1;
    while(i<=expo)
    {
        pot*=x;
        i++;
    }
    return pot;

}
float senodeequis(int x,int TOL)
{
    float term,acum;
    int pot,i,expo;
    double fact;
    i=1;
    acum=x;
    term=1;
    expo=3;
    while(term>TOL)
    {
        pot= potencia(x,expo);
        fact= Factorial(expo);
        term= (pot/fact);
        if(i==1)
        {
            acum-=term;
            i=2;
        }
        else
        {
            acum+=term;
            i=1;
        }
        expo= expo+2;
    }
    return acum;
}
double Factorial(int N)
{
  double acum;
  int i=1;
  acum=N;
  if(N==0)
  {
     acum=1;
  }
  else
  {
   while(i<N)
   {
       acum*=i;
       i++;
   }
  }
  return acum;
}

