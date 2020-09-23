#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void impresionRecursiva(char *);
void invertircadena
int main()
{
    char Cad[] = "abcd";
    impresionRecursiva(Cad);
    return 0;
}
/*** Punto A ***/
/*
void impresionRecursiva(char *Cad)
{
    if(! *Cad)
        return;
    printf("%c",*Cad);
    impresionRecursiva(Cad+1);
}
*/
/*** Parte B ***/
/*
void impresionRecursiva(char *Cad)
{
    if(! *Cad)
        return;
    impresionRecursiva(Cad+1);
    printf("%c",*Cad);
}
*/
/*** Parte C ***/
/*
void impresionRecursiva(char *Cad)
{
    if(! *Cad)
        return;
    printf("%c",*Cad);
    impresionRecursiva(Cad+1);
    printf("%c",*Cad);
}
*/
/*** Parte C' ***/
/*
void impresionRecursiva(char *Cad)
{
    if(! *Cad)
        return;
    printf("%c",*Cad);
    impresionRecursiva(Cad+1);
    if(*(Cad+1) != '\0')
        printf("%c",*Cad);
}
*/
/*** Parte D ***/
/*
void impresionRecursiva(char *Cad)
{
    if(! *Cad)
        return;
    printf("%s\n",Cad);
    impresionRecursiva(Cad+1);
}
*/
/*** Parte E ***/
/*
void impresionRecursiva(char *Cad)
{
    if(! *Cad)
        return;
    impresionRecursiva(Cad+1);
    printf("%s\n",Cad);
}
*/
/*** Parte F ***/
/*
void impresionRecursiva(char *Cad)
{
    if(! *Cad)
        return;
    printf("%s\n",Cad);
    impresionRecursiva(Cad+1);
    printf("%s\n",Cad);
}
*/
/*** Parte F' ***/
/*
void impresionRecursiva(char *Cad)
{
    if(! *Cad)
        return;
    printf("%s\n",Cad);
    impresionRecursiva(Cad+1);
    if(*(Cad+1)!= '\0')
        printf("%s\n",Cad);
}
*/
/*** Parte G ***/
void impresionRecursiva(char *Cad)
{
    if(! *Cad)
        return;
    impresionRecursiva(Cad+1);

}
