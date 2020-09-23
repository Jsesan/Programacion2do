#include "EjercitacionStringsHeader.h"
#include "ctype.h"
void MayusMinusSpecials(char* ptrC)
{
    int x,i=0,j,cant,z;
    cant=MYstrlen(ptrC);
    /* special */
    while(*(ptrC+i)!=0)
    {
        x=(int) *(ptrC+i);
        if(x<=90 && x>=65)
            {

            }
            else
            {
                if((x>=97 && x<=122) || x==32)
                {

                }
                else
                {
                    for(j=i;j<cant;j++)
                    {
                    *(ptrC+j)=*(ptrC+j+1);
                    }

                }

            }
        i++;
    }
    /*Mayus y minus*/
    *ptrC=toupper(*ptrC);
    z=1;
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
