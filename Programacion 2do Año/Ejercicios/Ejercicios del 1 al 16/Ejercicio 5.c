#include <stdio.h>
int Fibonacci (int);
int main()
{
    int N,F;
    printf("Ingrese el numero para verificar si esta en la serie de Fibonacci: ");
    scanf("%d",&N);
    F= Fibonacci(N);
    if(F==0)
    {
        printf("N no pertence a la serie");
    }
    else
        {
            printf("N pertenece a la serie");
        }
}
int Fibonacci (int N)
{
    int i,f,x;
    x=0;
    i=1;
    f=1;
    while(N>x)
    {
        x=i+f;
        i=f;
        f=x;
    }
    if(x==N)
    {
        return 1;
    }
    else
        {
            return 0;
        }
}
