#ifndef TRIANGULOSCONDIAGONALES_H_INCLUDED
#define TRIANGULOSCONDIAGONALES_H_INCLUDED
#include <stdio.h>
#define TAM 100
#define SUP(J,DIAGSEC,P) ((J)<(DIAGSEC)&&(J)>(P)? 1 : 0)
#define IZQ(J,DIAGSEC,P) ((J)<(DIAGSEC)&&(J)<(P)? 1 : 0)
#define INF(J,DIAGSEC,P) ((J)>(DIAGSEC)&&(J)<(P)? 1 : 0)
#define DER(J,DIAGSEC,P) ((J)>(DIAGSEC)&&(J)>(P)? 1 : 0)
#endif // TRIANGULOSCONDIAGONALES_H_INCLUDED
