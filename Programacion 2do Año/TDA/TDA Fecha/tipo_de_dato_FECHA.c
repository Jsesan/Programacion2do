#include "tipo_de_dato_FECHA.h"
int IngresarFechaDMA(tFecha *date, const char *MensajeOp)
{
    if(MensajeOp)
        printf("%s",MensajeOp);
    else
        printf("Ingrese fecha formato dd/mm/aaaa - No Ingresa = 0");
    date->a=0;
    date->d=0;
    date->m=0;
    fflush(stdin);
    scanf("%d/%d/%d",&date->d, &date->m, &date->a);
    return date->d && date->m  && date->a;
}
int EsFechaValida(const tFecha *date)
{
    static const char dias[][12]={{31,28,31,30,31,30,31,31,30,31,30,31},
                                  {31,29,31,30,31,30,31,31,30,31,30,31}
    };
    return date->m > 0 && date->m <= 12 && date->a >= AN_MIN && date->a <= AN_MAX && date->d > 0 && date->d <= dias[ES_BICIESTO(date->a)][date->m - 1];
}
void MostrarFechaDMA(const tFecha *date)
{
    printf("%02d/%02d/%04d",date->d,date->m,date->a);
}
int CompararFechas(const tFecha *date1,const tFecha *date2)
{
    int cmp = date1->a - date2->a;
    if(cmp)
        return cmp;
    cmp = date1->m - date2->m;
    if(cmp)
        return cmp;
    return date1->d -date2->d;

}
int NroDiaSemana(const tFecha *date)
{
    int distBASE= date->a %400;
    return (SADADO - 1 + distBASE / 4 - distBASE / 100 + (distBASE !=0) +aJuliano(date))%7;
}
long DiasEntreFechas(const tFecha *date1,const tFecha *date2)
{
    int aBase = date1->a <= date2->a ? date1->a : date2->a,
        distBase1= date1->a - aBase,
        distBase2= date2->a -aBase;
    long diasBase1= distBase1 * 365L + distBase1/4 -distBase1/100 + distBase1/400 + (distBase1!=0) + aJuliano(date1),
         diasBase2= distBase2 * 365L + distBase2/4 -distBase2/100 + distBase2/400 + (distBase2=0) + aJuliano(date2);
            return diasBase2 - diasBase1;
}
int aJuliano(const tFecha *date)
{
    int dias[][12]= {
    {0,31,59,90,120,151,181,212,243,273,304,334},
    {0,31,60,91,121,152,182,213,244,274,305,335}
    };
    return dias[ES_BICIESTO(date->a)][date->m-1]+date->d;
}
tFecha CalcularEdad(const tFecha *BirthDay, const tFecha *Today)
{
    static const char dias[][13]= {
    {0,31,31,28,31,30,31,30,31,31,30,31,30},
    {0,31,31,29,31,30,31,30,31,31,30,31,30}
    };
    tFecha edad;

    edad = *Today;
    if((edad.d -= BirthDay->d) < 0)
    {
        edad.d += dias[ES_BICIESTO(edad.a)][edad.m];
        edad.m-- ;
    }
    if((edad.m -= BirthDay->m) < 0)
    {
        edad.m += 12;
        edad.a-- ;
    }
    edad.a -= BirthDay->a;
    return edad;
}
