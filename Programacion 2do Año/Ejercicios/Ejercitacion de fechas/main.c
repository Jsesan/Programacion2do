#include <stdio.h>
#include <stdlib.h>
#include "Ejercicio 17.h"
#include "Ejercicio 19.h"

int main()
{
    int t1,cod;
    tfecha fecha;
   do{
        printf("Ingrese una fecha1 valida");
        scanf("%d",&fecha.dia);
        scanf("%d",&fecha.mes);
        scanf("%d",&fecha.anio);
        t1=VerificarFecha(fecha);
   }while(t1!= 1);
   cod= SemanaCod(fecha);
   if(cod==0)
   {
       printf("fecha es Domingo");
   }
   else
   {
       if(cod==1)
       {
          printf("fecha es Lunes");
       }
       else
       {
           if(cod==2)
           {
               printf("fecha es Martes");
           }
           if(cod==3)
           {
               printf("fecha es Miercoles");
           }
           if(cod==4)
           {
               printf("fecha es Jueves");
           }
           if(cod==5)
           {
               printf("fecha es Viernes");
           }
           if(cod==6)
           {
               printf("fecha es Sabado");
           }
       }
   }

}
