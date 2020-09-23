#include <stdio.h>
#include <stdlib.h>
#include "TriangulosConDiagonales.h"
int main()
{
    int orden=5;
    int mat[5][TAM]= {{0,1,3,4,5},
                          {0,1,3,4,5},
                          {0,1,3,4,5},
                          {0,1,3,4,5},
                          {0,1,3,4,5},
                          };
    TriangulosConDiagonales(mat,orden);
    return 0;
}
