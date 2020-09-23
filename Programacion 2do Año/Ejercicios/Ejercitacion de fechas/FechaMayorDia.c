#include "FechaMayor.h"
int FechaMayorDia(tfecha fecha1, tfecha fecha2)
{
    tfecha fechamayor;
     if(fecha1.anio==fecha2.anio)
    {
        if(fecha1.mes==fecha2.mes)
        {
           if(fecha1.dia>fecha2.dia)
        {
            fechamayor.anio=fecha1.anio;
            fechamayor.mes=fecha1.mes;
            fechamayor.dia=fecha1.dia;
        }
        if(fecha1.dia<fecha2.dia)
        {
            fechamayor.anio=fecha2.anio;
            fechamayor.mes=fecha2.mes;
            fechamayor.dia=fecha2.dia;
        }
        }
        else
        {
        if(fecha1.mes>fecha2.mes)
        {
            fechamayor.anio=fecha1.anio;
            fechamayor.mes=fecha1.mes;
            fechamayor.dia=fecha1.dia;
        }
        if(fecha1.mes<fecha2.mes)
        {
            fechamayor.anio=fecha2.anio;
            fechamayor.mes=fecha2.mes;
            fechamayor.dia=fecha2.dia;
        }
        }

    }
    else
    {
    if(fecha1.anio>fecha2.anio)
    {
        fechamayor.anio=fecha1.anio;
        fechamayor.mes=fecha1.mes;
        fechamayor.dia=fecha1.dia;
    }
    if(fecha1.anio<fecha2.anio)
    {
        fechamayor.anio=fecha2.anio;
        fechamayor.mes=fecha2.mes;
        fechamayor.dia=fecha2.dia;
    }
    }
    return fechamayor.dia;
}
