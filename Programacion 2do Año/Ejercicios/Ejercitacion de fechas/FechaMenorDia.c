#include "FechaMenor.h"
int FechaMenorDia(tfecha fecha1, tfecha fecha2)
{
    tfecha fechamenor;
     if(fecha1.anio==fecha2.anio)
    {
        if(fecha1.mes==fecha2.mes)
        {
           if(fecha1.dia<fecha2.dia)
        {
            fechamenor.anio=fecha1.anio;
            fechamenor.mes=fecha1.mes;
            fechamenor.dia=fecha1.dia;
        }
        if(fecha1.dia>fecha2.dia)
        {
            fechamenor.anio=fecha2.anio;
            fechamenor.mes=fecha2.mes;
            fechamenor.dia=fecha2.dia;
        }
        }
        else
        {
        if(fecha1.mes<fecha2.mes)
        {
            fechamenor.anio=fecha1.anio;
            fechamenor.mes=fecha1.mes;
            fechamenor.dia=fecha1.dia;
        }
        if(fecha1.mes>fecha2.mes)
        {
            fechamenor.anio=fecha2.anio;
            fechamenor.mes=fecha2.mes;
            fechamenor.dia=fecha2.dia;
        }
        }

    }
    else
    {
    if(fecha1.anio<fecha2.anio)
    {
        fechamenor.anio=fecha1.anio;
        fechamenor.mes=fecha1.mes;
        fechamenor.dia=fecha1.dia;
    }
    if(fecha1.anio>fecha2.anio)
    {
        fechamenor.anio=fecha2.anio;
        fechamenor.mes=fecha2.mes;
        fechamenor.dia=fecha2.dia;
    }
    }
    return fechamenor.dia;
}
