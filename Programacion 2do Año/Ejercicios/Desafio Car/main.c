#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
    int n=65,i=66,x=67,z=0;
    printf("Tabla ASCII (Abecedario)\n");
    for(z;z<=8;z++)
    {

        printf("  %c | %d | %x  ",n,n,n);
        n=n+3;
        printf("  %c | %d | %x  ",i,i,i);
        i=i+3;
        if(x<91)
        {
        printf("  %c | %d | %x  \n",x,x,x);
        x=x+3;
        }
    }
}
