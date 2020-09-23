#include "Ejercicio 17.h"
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
void RestarNDias(tfecha fecha,int n)
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
     if(fecha.mes==2||fecha.mes==5||fecha.mes==7||fecha.mes==8||fecha.mes==10||fecha.mes==12)
     {
         if(fecha.dia==1)
         {
            fecha.dia=30;
            fecha.mes--;
         }
         else
         {
            fecha.dia--;
         }

     }
     else
     {
         if(fecha.mes==3)
         {
         if(bi==1)
         {
             if(fecha.dia==1)
             {
                 fecha.dia=29;
                 fecha.mes--;
             }
             else
             {
               fecha.dia--;
             }

         }
         if(bi!=1)
         {
             if(fecha.dia==1)
             {

                 fecha.dia=28;
                 fecha.mes--;
             }
             else
             {
                 fecha.dia--;
             }

         }
         }
         else
         {
             if(fecha.dia==1)
            {
                if(fecha.mes==1)
            {
                fecha.dia=31;
                fecha.mes=12;
                fecha.anio--;
            }
            else
            {
               fecha.dia=31;
                fecha.mes--;
            }

            }
            else
            {
                fecha.dia--;
            }

         }



     }
     i++;
    }
    printf("Si restamos n dias, la fecha es: %d %d %d",fecha.dia,fecha.mes,fecha.anio);
}
