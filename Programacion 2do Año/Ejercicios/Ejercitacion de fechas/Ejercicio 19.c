#include "Ejercicio 19.h"
#include "Ejercicio 18.h"
int SemanaCod(tfecha fecha)
{
    int n,i,cod;
    tfecha Referencia;
    i=0;
    cod=1;
    Referencia.anio=2020;
    Referencia.dia=13;
    Referencia.mes=4;
    n= DiferenciaEntreFechas(fecha,Referencia);
    if(fecha.anio==Referencia.anio && fecha.mes==Referencia.mes && fecha.dia==Referencia.dia)
    {
        cod=1;
    }
    else
    {
    if(fecha.anio>=Referencia.anio && fecha.mes>=Referencia.mes && fecha.dia>=Referencia.dia)
    {
    while(i<n)
    {
        if(cod==6)
        {
            cod=0;
        }
        else
        {
            cod++;
        }
        i++;
    }
    }
    else
    {
        while(i<n)
    {
        if(cod==0)
        {
            cod=6;
        }
        else
        {
            cod--;
        }
        i++;
    }

    }
    }
    return cod;
}
