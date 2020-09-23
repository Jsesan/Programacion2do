/*Ejercicio 2*/
#include <stdio.h>
double Factorial (int);
float combinatorio(int,int);
int main()
{
    int m,n;
    float c;
    printf("ingrese un valor para n, mayor que 0 ");
    do{
        scanf("%d",&n);
    }while(n<0);
    printf("ingrese un valor para m, mayor que n ");
    do{
        scanf("%d",&m);
    }while(m<n);
    c= combinatorio(n,m);
    printf("el num combinatorio es %f",c);
}
float combinatorio(int n, int m)
{
    double fm,fn,fresta;
    float c;
    int resta;
    resta= m-n;
    fresta= Factorial(resta);
    fm= Factorial(m);
    fn= Factorial(n);
    c= fm/(fn*fresta);
    return c;
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
