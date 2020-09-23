
#include "funciones.h"

#define MINIMO( X , Y ) ((X)<=(Y)?(X):(Y))

int comparacion(const char*,const char*);
int cantidadpalabras(const char*);
int palabramaslarga(const char*);
int validarpuntos(const char*);

/**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**/
/**//* FUNCIONES A DESARROLLAR                                            *//**/
/**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**/

int contarOcurrencias1_MIO(const char *cad, const char *sub)
{
    const char *submov = sub,*cadmov =cad;
    char aux;
    int cont=0;
    if(*sub == '\0')
    {
        return 1;
    }
    while(*cadmov != '\0')
    {
        if(((int)*submov>=65 && (int)*submov<=90)
           || ((int)*submov>=97 && (int)*submov<=122))
        {
                if((int)*submov>=65 && (int)*submov<=90)
                aux= *submov + 32;
                if((int)*submov>=97 && (int)*submov<=122)
                aux= *submov - 32;
                    if(*cadmov == *submov || *cadmov == aux)
                    {
                        submov++;
                        if(*submov == '\0')
                        {
                            cont+=1;
                            cadmov--;
                            submov = sub;
                        }
                    }
                else if(*cadmov != *submov)
                {
                    submov = sub;
                }
        }
        else
        {

            if(*cadmov == *submov)
            {
                submov++;
                if(*submov == '\0')
                    {
                        cont+=1;
                        submov = sub;
                    }
            }
            else
            {
                submov = sub;
            }
        }
        cadmov++;
    }
    return cont;
}

int contarOcurrencias2_MIO(const char *cad, const char *sub)
{
    const char *submov = sub,*cadmov =cad;
    char aux;
    int cont=0;
    if(*sub == '\0')
    {
        return 1;
    }
    while(*cadmov != '\0')
    {
        if(((int)*submov>=65 && (int)*submov<=90)
           || ((int)*submov>=97 && (int)*submov<=122))
        {
                if((int)*submov>=65 && (int)*submov<=90)
                aux= *submov + 32;
                if((int)*submov>=97 && (int)*submov<=122)
                aux= *submov - 32;
                    if(*cadmov == *submov || *cadmov == aux)
                    {
                        submov++;
                        if(*submov == '\0')
                        {
                            cont+=1;
                            submov = sub;
                        }
                    }
                else if(*cadmov != *submov)
                {
                    submov = sub;
                }
        }
        else
        {

            if(*cadmov == *submov)
            {
                submov++;
                if(*submov == '\0')
                    {
                        cont+=1;
                        submov = sub;
                    }
            }
            else
            {
                submov = sub;
            }
        }
        cadmov++;
    }
    return cont;
}


void rotarMat180_MIO(int m[][COLUM], int filas, int colum)
{
    int matcopy[FILAS][COLUM];
    for(int i=0;i<filas;i++)
    {
        for(int j=0;j<colum;j++)
        {
            matcopy[i][j]=m[i][j];
        }
    }
    for(int x=filas;x>0;x--)
    {
        for(int y=colum;y>0;y--)
        {
            m[filas-x][colum-y] = matcopy[x-1][y-1];
        }
    }
}

int  mostrarMatTriangDerInf_MIO(int m[][COLUM], int filas, int colum)
{
    for(int i=0;i<filas;i++)
    {
        printf("%*s",4*(colum-i-1),"");
        for(int j=(colum-i-1);j<colum;j++)
            printf(" %3d",m[i][j]);
        printf("\n");
    }
    return 0;
}


int  ordenarArchivo_MIO(const char *archEnt, const char *archSal)
{
    int comp,pasadas=0;
    FILE *Entry, *Out;
    tPila pila1,pila2;
    char aux[TAM_PILA],mayor[100];
    crearPila_MIO(&pila1);
    crearPila_MIO(&pila2);
    Entry= fopen(archEnt,"rt");
    if(!Entry)
        return ERROR_ARCH_ENT;
    while(fgets(aux,sizeof(aux),Entry))
    {
        ponerEnPila_MIO(&pila1,aux,strlen(aux));
    }
    while(!pilaVacia_MIO(&pila1))
    {
        int i=0;
        sacarDePila(&pila1,aux,strlen(aux));
        strcpy(mayor,aux);

        while(sacarDePila(&pila1,aux,strlen(aux)))
        {
            comp=comparacion(mayor,aux);
            if(comp==1)
            {

                ponerEnPila_MIO(&pila2,aux,strlen(aux));
                i++;
            }
            else
            {
                if(comp==2)
                {
                    ponerEnPila_MIO(&pila2,aux,strlen(aux));
                    i++;
                }
                else
                {
                    ponerEnPila_MIO(&pila2,mayor,strlen(mayor));
                    i++;
                    strcpy(mayor,aux);
                }
            }
            if(i>pasadas)
            {
                pasadas=i;
            }
        }
        for(int j=0;j<i;j++)
        {
            sacarDePila_MIO(&pila2,aux,strlen(aux));
            ponerEnPila_MIO(&pila1,aux,strlen(aux));
        }
        ponerEnPila_MIO(&pila2,mayor,strlen(mayor));
    }
    Out= fopen(archSal,"wt");
    if(!Out)
    {
       return ERROR_ARCH_SAL;
    }
    for(int x=0;x<pasadas;x++)
    {
        sacarDePila_MIO(&pila2,aux,strlen(aux));
        fprintf(Out,"%s\n",aux);
    }
     sacarDePila_MIO(&pila2,aux,strlen(aux));
     fprintf(Out,"%s",aux);
    fclose(Entry);
    fclose(Out);
    return 0;
}

int comparacion(const char *mayor,const char *aux)
{
    int cpmay,cpaux;
    cpmay= cantidadpalabras(mayor);
    cpaux= cantidadpalabras(aux);
    if(cpmay==cpaux)
    {
        int clmay,claux;
        clmay= palabramaslarga(mayor);
        claux= palabramaslarga(aux);
        if(clmay<claux)
            return 0;
        if(clmay>claux)
            return 1;
        if(clmay==claux)
            return validarpuntos(mayor);
    }
    else
    {
        if(cpmay>cpaux)
            return 1;
        if(cpmay<cpaux)
            return 0;
    }
    return 1;
}

int cantidadpalabras(const char *linea)
{
    int cont=0;
    while(*linea!='\0')
    {
        if(((int)*linea>=65 && (int)*linea<=90)
           || ((int)*linea>=97 && (int)*linea<=122))
           {
               linea++;
               if(((*linea==' ' || *linea==')') || (*linea==',' || (*linea=='.' || *linea==';')) || (*linea=='\0' || *linea=='\n')))
               {
                   cont+=1;
                   if(*linea=='\0' || *linea=='\n')
                    return cont;
               }
           }
           else
           {
               linea++;
           }
    }
    return cont;
}

int validarpuntos(const char *mayor)
{
    while(*mayor!='\0')
    {
        if(*mayor=='.')
            return 2;

        mayor++;
    }
    return 0;
}

int palabramaslarga(const char *linea)
{
    int cont,may=0;
    while(*linea!='\0')
    {
        cont=0;
        while(*linea!=' ' && (*linea!=',' && (*linea!='(' && (*linea!=';' && *linea!=')') )))
        {
            cont+=1;
            linea++;
        }
        if(cont>may)
        {
            may=cont;
        }
        linea++;
    }
    return may;
}

void crearPila_MIO(tPila *p)
{
    p->tope = TAM_PILA;
}


int  pilaLlena_MIO(const tPila *p, unsigned cantBytes)
{
    return p->tope < cantBytes + sizeof(unsigned);
}


int  ponerEnPila_MIO(tPila *p, const void *d, unsigned cantBytes)
{
     if(p->tope< cantBytes + sizeof(unsigned))
        return 0;
    p->tope -= cantBytes;
    memcpy(p->pila + p->tope, d, cantBytes);
    p->tope-= sizeof(unsigned);
    memcpy(p->pila +p->tope,&cantBytes,sizeof(unsigned));
    return 1;
}



/*
int  verTope_MIO(const tPila *p, void *d, unsigned cantBytes)
{

}
*/

int  pilaVacia_MIO(const tPila *p)
{
    return p->tope == TAM_PILA;
}


int  sacarDePila_MIO(tPila *p, void *d, unsigned cantBytes)
{
    if(p->tope == TAM_PILA)
        return 0; //Pila Vacia
    unsigned taminfo;
    memcpy(&taminfo, p->pila + p->tope, sizeof(unsigned));
    p->tope += sizeof(unsigned);
    memcpy(d, p->pila + p->tope,MINIMO(cantBytes,taminfo));
    p->tope += cantBytes;
    return 1;
}

/*
void vaciarPila_MIO(tPila *p)
{

}


 */
/**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**/
