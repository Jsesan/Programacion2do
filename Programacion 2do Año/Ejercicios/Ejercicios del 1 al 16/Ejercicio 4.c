/*Ejercicio 4*/
#include <stdio.h>
#include <math.h>
float RaizCuadrada(float,float);
int main ()
{
    float a,TOL,Res;
    printf("Ingrese un valor positivo: ");
    scanf("%f",&a);
    printf("Ingrese un valor para el TOL: ");
    scanf("%f",&TOL);
    Res= RaizCuadrada(a,TOL);
    printf("La raiz cuadrada de %f es %f",a,Res);
}
float RaizCuadrada(float a, float TOL)
{
    float resta,R,Rb;
    R=1;
    resta=1;
    while(resta>TOL)
    {
       Rb=R;
       R= 0.5*(Rb+(a/Rb));
       resta= R-Rb;
       resta= fabs(resta);
    }
    return R;
}
