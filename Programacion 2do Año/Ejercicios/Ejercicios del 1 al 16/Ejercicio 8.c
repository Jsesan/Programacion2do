/*Ejercicio 8*/
#include <stdio.h>
int main()
{
    int x,y,acum,i;
    i=1;
    acum=0;
    printf("Ingrese dos numeros naturales: ");
    scanf("%d",&x);
    scanf("%d",&y);
    if(x==0 || y==0)
    {
        printf("El producto de x e y es 0");
    }
    else
    {
        while(i<=y)
        {
           acum+=x;
           i++;
        }
    }
     printf("El producto de x e y es %d",acum);
}
