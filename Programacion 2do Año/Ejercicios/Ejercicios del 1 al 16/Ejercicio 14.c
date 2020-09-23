#include<stdio.h>
typedef struct{ int dia;
                int mes;
                int anio;
                }tfecha;
int VerificarFecha(tfecha);
int main()
{
    int t;
    tfecha fecha;
    t=0;
    printf("Ingrese una fecha correcta ");
    do{
        scanf("%d",&fecha.dia);
        printf("/");
        scanf("%d",&fecha.mes);
        printf("/");
        scanf("%d",&fecha.anio);
        t= VerificarFecha(fecha);
    }while(t!=1);

}
int VerificarFecha(tfecha fecha)
{
    int max;
    max=0;
    if((fecha.anio%4 == 0 && fecha.anio%100 != 0)||(fecha.anio%400==0))
    {
        max=29;
    }
    if(fecha.mes>12 || fecha.mes<1)
    {
        return 0;
    }
    if(fecha.mes==1||fecha.mes==3||fecha.mes==5||fecha.mes==7||fecha.mes==8||fecha.mes==10||fecha.mes==12)
    {
        max=31;
    }
    else
    {
        if(fecha.mes==2 && max!=29)
        {
            max=28;
        }
        else
        {
            if(fecha.mes!=2)
            {
                max=30;
            }
        }
    }
    if(fecha.dia<1 || fecha.dia>max)
    {
        return 0;
    }
    return 1;
}

