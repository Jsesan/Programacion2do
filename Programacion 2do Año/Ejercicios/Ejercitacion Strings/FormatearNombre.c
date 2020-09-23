#include "EjercitacionStringsHeader.h"
void FormatearNom(char* ptrC)
{
    int z=1;
    Fspecial(ptrC);
    LimpiarEspacios(ptrC);
    *ptrC=toupper(*ptrC);
    while(*(ptrC+z)!=0)
    {
        if(*(ptrC+z-1)!= ' ')
        {
            *(ptrC+z)=tolower(*(ptrC+z));
        }
        else
        {
            if(*(ptrC+z-1)== ' ')
                *(ptrC+z)=toupper(*(ptrC+z));
        }

        z++;
    }

}
