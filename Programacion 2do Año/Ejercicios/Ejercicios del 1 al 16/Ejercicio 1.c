/*Ejercicio 1*/
#include <stdio.h>
double Factorial (int);
int main()
{
    double fact;
    int N;
    printf("Ingrese el numero del que requiere el factorial ");
    scanf("%d",&N);
    fact= Factorial(N);
    printf("%lf",fact);

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

