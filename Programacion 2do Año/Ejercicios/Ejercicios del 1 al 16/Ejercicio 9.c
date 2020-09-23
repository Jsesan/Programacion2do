/*Ejercicio 9*/
#include <stdio.h>
void CocienteyResto(int,int,float[]);
int main()
{
    int A,B;
    float V[2]={0};
    printf("Ingresar A y B (B distinto de 0) ");
    scanf("%d",&A);
    do{
        scanf("%d",&B);
    }while(B==0);
    CocienteyResto(A,B,V);
    printf("El cociente es %f el resto es %f",V[0],V[1]);
}
void CocienteyResto (int A,int B,float V[])
{
    float Aa,Bb;
    Aa=A;
    Bb=B;
    V[0]=(Aa/Bb);
    V[1]=(A%B);
}
