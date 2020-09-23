#include "Ejercicio 18.h"
int DiferenciaEntreFechas(tfecha fecha1,tfecha fecha2)
{
int bi,cont;
tfecha fechamayor,fechamenor;
cont=0;
fechamayor.anio= FechaMayor(fecha1,fecha2);
fechamayor.mes= FechaMayorMes(fecha1,fecha2);
fechamayor.dia= FechaMayorDia(fecha1,fecha2);
fechamenor.anio= FechaMenor(fecha1,fecha2);
fechamenor.mes= FechaMenorMes(fecha1,fecha2);
fechamenor.dia= FechaMenorDia(fecha1,fecha2);
while((fechamayor.anio>fechamenor.anio)|| (fechamayor.mes>fechamenor.mes)||(fechamayor.dia>fechamenor.dia))
{
    bi=0;
    if((fechamayor.anio%4 == 0 && fechamayor.anio%100 != 0)||(fechamayor.anio%400==0))
    {
        bi=1;
    }
     if(fechamayor.mes==2||fechamayor.mes==5||fechamayor.mes==7||fechamayor.mes==8||fechamayor.mes==10||fechamayor.mes==12)
     {
         if(fechamayor.dia==1)
         {
            fechamayor.dia=30;
            fechamayor.mes--;
         }
         else
         {
            fechamayor.dia--;
         }

     }
     else
     {
         if(fechamayor.mes==3)
         {
         if(bi==1)
         {
             if(fechamayor.dia==1)
             {
                 fechamayor.dia=29;
                 fechamayor.mes--;
             }
             else
             {
               fechamayor.dia--;
             }

         }
         if(bi!=1)
         {
             if(fechamayor.dia==1)
             {

                 fechamayor.dia=28;
                 fechamayor.mes--;
             }
             else
             {
                 fechamayor.dia--;
             }

         }
         }
         else
         {
             if(fechamayor.dia==1)
            {
                if(fechamayor.mes==1)
            {
                fechamayor.dia=31;
                fechamayor.mes=12;
                fechamayor.anio--;
            }
            else
            {
               fechamayor.dia=31;
                fechamayor.mes--;
            }

            }
            else
            {
                fechamayor.dia--;
            }

         }



     }
     cont++;
    }
    return cont;
}

