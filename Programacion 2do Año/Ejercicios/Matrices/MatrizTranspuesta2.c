//Ejercicio 35
#include "MatrizTranspuetsa.h"
#include "CopiarUnaMatriz.h"
void MatrizTranpuestaEnOtraMat(int mat[][TAM],int mat2[][TAM],int orden)
{
    CopiarUnaMat(mat,mat2,orden);
    MatrizTranpuesta(mat2,orden);
}
