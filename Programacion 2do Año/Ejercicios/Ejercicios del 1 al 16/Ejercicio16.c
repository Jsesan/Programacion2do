/*Ejercicio 16*/
#include<stdio.h>
typedef struct{ int dia;
                int mes;
                int anio;
                }tfecha;
int VerificarFecha(tfecha);
void SumarNDias(tfecha,int);
int main()
{
    int t,n;
    tfecha fecha;
   do{
        printf("Ingrese una fecha valida");
        scanf("%d",&fecha.dia);
        scanf("%d",&fecha.mes);
        scanf("%d",&fecha.anio);
        t=VerificarFecha(fecha);
        printf("Ingrese un valor n");
        scanf("%d",&n);
   }while(t!=1);
   SumarNDias(fecha,n);

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
void SumarNDias(tfecha fecha,int n)
{
    int i;
    i=0;
    while(i<n)
    {
         int bi;
    bi=0;
    if((fecha.anio%4 == 0 && fecha.anio%100 != 0)||(fecha.anio%400==0))
    {
        bi=1;
    }
     if(fecha.mes==1||fecha.mes==3||fecha.mes==5||fecha.mes==7||fecha.mes==8||fecha.mes==10||fecha.mes==12)
     {
         if(fecha.dia==31)
         {
            if(fecha.mes==12)
            {
                fecha.dia=1;
                fecha.mes=1;
                fecha.anio++;
            }
            else
            {
                fecha.dia=1;
                fecha.mes++;
            }

         }
         else
         {
            fecha.dia++;
         }

     }
     else
     {
         if(fecha.mes==2)
         {
         if(bi==1)
         {
             if(fecha.dia==29)
             {
                 fecha.dia=1;
                 fecha.mes++;
             }
             else
             {
               printf("dia es %d",fecha.dia);
               fecha.dia++;
             }

         }
         if(bi!=1)
         {
             if(fecha.dia==28)
             {
                 printf("entramos aca skere");
                 fecha.dia=1;
                 fecha.mes++;
             }
             else
             {
                 fecha.dia++;
             }

         }
         }
         else
         {
             if(fecha.dia==30)
            {
                fecha.dia=1;
                fecha.mes++;
            }
            else
            {
                fecha.dia++;
            }

         }



     }
     i++;
    }
    printf("Si sumamos n dias, la fecha es: %d %d %d",fecha.dia,fecha.mes,fecha.anio);
}
