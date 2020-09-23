#ifndef TIPO_DE_DATO_FECHA_H_INCLUDED
#define TIPO_DE_DATO_FECHA_H_INCLUDED

#include <stdio.h>

#define ES_BICIESTO(X) ( ( (X) % 4 == 0 && (X) % 100 != 0) ||(X) % 400 == 0 )

#define AN_MAX 2200
#define AN_MIN 1582

#define DOMINGO 0
#define LUNES 1
#define MARTES 2
#define MIERCOLES 3
#define JUEVES 4
#define VIERNES 5
#define SABADO 6

typedef struct{
        int d;
        int m;
        int a;
}tFecha;

int IngresarFechaDMA(tFecha *date, const char *MensajeOp);
int EsFechaValida(const tFecha *date);
void MostrarFechaDMA(const tFecha *date);
int CompararFechas(const tFecha *date1,const tFecha *date2);
int NroDiaSemana(const tFecha *date);
long DiasEntreFechas(const tFecha *date1,const tFecha *date2);
int aJuliano(const tFecha *date);
tFecha CalcularEdad(const tFecha *BirthDay, const tFecha *Today);


#endif // TIPO_DE_DATO_FECHA_H_INCLUDED
