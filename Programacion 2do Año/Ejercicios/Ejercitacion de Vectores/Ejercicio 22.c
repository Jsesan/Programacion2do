#include "Ejercicio 22.h"
void InsertarEnPosVector(int v[],int n)
{
    int pos,sb,pos2,repetir;
    do{
        printf("Ingrese valor que desee ingresar ");
        scanf("%d",&n);
        printf("Indique posicion en la que quiera ingresar su valor: ");
        scanf("%d",&pos);
        if(v[pos]==0)
        {
            v[pos]=n;
        }
        else
        {   do{
            printf("Posicion ocupada, si desea sobreescribirla ingrese uno, en caso contrario ingrese 0  ");
            scanf(" %d",&sb);
        }while(sb>1 && sb<0);
        if(sb==1)
        {
           v[pos]=n;
        }
        else
        {
            do{
            printf("Indique la nueva pos posicion en la que quiera ingresar su valor: ");
            scanf("%d",&pos2);
            }while(pos2==pos);
        }
        }
        do{
        printf("Si desea escribir otra entrada ingrese 1, en caso contrario ingrese 0 ");
        scanf("%d",&repetir);
        }while(repetir>1 && repetir<0);

    }while(repetir==1);
}
