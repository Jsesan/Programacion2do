/**//* 42.393.167-SESAN,JuanIgnacio-(06-2965) *//**/

#include "funciones.h"

char* Reemplazar(char *cadmov,const char *reem,const char *busc);
int strlong(const char *str);
#define TAM_DISP( X , Y , Z , W) ((X) - (Y) - (Z) + (W))
/**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**/
/**//* FUNCIONES A DESARROLLAR                                            *//**/
/**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**/
/**//**//**//* PUNTO 1                                            *//**//**//**/

int buscarYReemplazar_MIO(char *cade, int tam,
                          const char *busc, const char *reem)
{
    int cantreem=0,b=0;
    char *cadeini = cade,aux;
    const char *buscmov=busc;
    while(*cade)
    {
        b=0;

            if((*buscmov>='A' && *buscmov<='Z')
            || (*buscmov>='a' && *buscmov<='z'))
            {
                if(*buscmov>='A' && *buscmov<='Z')
                aux= *buscmov + ('a'-'A');
                if(*buscmov>='a' && *buscmov<='z')
                aux= *buscmov - ('a'-'A');

            }
            else
            {
               aux = *buscmov;
            }
            if(*cade == *buscmov || *cade == aux)
                {
                    buscmov++;
                    if(*buscmov == '\0')
                    {
                        //encontrado
                        cade = cade - strlong(busc) + 1;
                        buscmov=busc;
                        b=1;
                    }

                }
            else
                {
                    buscmov=busc;
                }

            if(b==1)
            {
                if(TAM_DISP(tam,strlong(cadeini),strlong(reem),strlong(busc)) >= 0)
                {
                    cade = Reemplazar(cade,reem,busc);
                    cantreem++;
                }
                else
                {
                    cade = cadeini;
                    return -(cantreem+1);
                }
            }

        cade++;
    }

    if(b==0 && cantreem==0)
            {
                cade = cadeini;
                return 0;
            }
    cade=cadeini;
    return cantreem;
}

char* Reemplazar(char *cadmov,const char *reem,const char *busc)
{
    int diferencia=  strlong(reem) - strlong(busc), cont=0;
    char *cadeaux,*aux;
    const char *reemmov=reem;
    if(diferencia >= 0)
    {
    while(cont<strlong(busc))
    {
        *cadmov=*reemmov;
        cadmov++;
        reemmov++;
        cont++;
    }
    if(diferencia==0)
    {
        return cadmov;
    }
    else
    {
        cadeaux = cadmov + strlong(cadmov);
        aux = cadeaux + diferencia;
        cont=0;
        while(cont<strlong(cadmov)+ 1)
        {
            *aux=*cadeaux;
            cadeaux--;
            aux--;
            cont++;
        }
        while(*reemmov!='\0')
        {
            *cadmov=*reemmov;
            cadmov++;
            reemmov++;
        }

    }
    }
    else
    {
        while(*reemmov!='\0')
        {
            *cadmov=*reemmov;
            cadmov++;
            reemmov++;
        }
        cont=0;
        aux = cadmov;
        while(cont != (diferencia))
        {
            for(int i=0;i<strlong(aux)+1;i++)
            {
                *cadmov = *(cadmov+1);
                cadmov++;
            }
            cadmov=aux;
            cont--;
        }

    }

    return cadmov;
}

int strlong(const char *str)
{
    const char *aux= str;
    int cant=0;
        while(*aux != '\0')
        {
            cant++;
            aux++;
        }
        return cant;
}

/**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**/

