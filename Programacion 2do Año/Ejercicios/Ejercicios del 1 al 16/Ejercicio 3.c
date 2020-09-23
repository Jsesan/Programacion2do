/*Ejercicio 3*/
#include <stdio.h>
#include <math.h>
double Factorial (int);
float ealaequis(int,float);
int potencia(int,int);
int main ()
{
    int x;
    float TOL,ex;
    printf("ingrese un valor entero para x: ");
    scanf("%d",&x);
    printf("ingrese un valor para TOL: ");
    scanf("%f",&TOL);
    ex= ealaequis(x,TOL);
    printf("e^x para x y TOL seleccionados es: %f",ex);
}
float ealaequis(int x,float TOL)
{
    float termino,acum;
    int pot,expo;
    double fact;
    expo=1;
    acum=1;
    termino=1;
        while(TOL<termino)
        {
            pot= potencia(x,expo);
            fact= Factorial(expo);
            termino=(pot/fact);
            acum+=termino;
            expo++;

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
