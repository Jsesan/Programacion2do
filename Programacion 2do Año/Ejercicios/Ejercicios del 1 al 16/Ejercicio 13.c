/*Ejercicio 13*/
#include <stdio.h>
int primo (int);
int main()
{
    int N,res;
    printf("Ingrese el nro: ");
    scanf("%d",&N);
    res= primo(N);
    if(res==1)
    {
       printf("%d es primo",N);
    }
    else
    {
        printf("%d no es primo",N);
    }

}
int primo (int N)
{
    int i;
    i=2;
    for(i;i<N;i++)
    {
        if((N%i)==0)
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
}
