/**//* 42.393.167-SESAN,JuanIgnacio-(06-2965) *//**/


/**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**/
/**//**//* CUALQUIER INCLUDE DE BIBLIOTECA QUE NECESITE, HÁGALO ACÁ   *//**//**/
#include <stdlib.h>
/**//**//* CUALQUIER INCLUDE DE BIBLIOTECA QUE NECESITE, HÁGALO ACÁ   *//**//**/
/**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**/
#include "funciones.h"
/**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**/
/**//**//* ACÁ DEBE DESARROLLAR LAS FUNCIONES Y PRIMITIVAS PEDIDAS    *//**//**/
int Miround(int num1,int num2);
void buscarmayorocurrencias( tNodo* faltante,char* dnimax,int (*comparar)(const void *, const void *));
char* strcopiar(char *s1, const char *s2);
/**//**//* ADEMÁS DE CUALQUIER OTRA FUNCIÓN QUE SE REQUIERA           *//**//**/
/**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**/
/**//* FUNCIONES Y PRIMITIVAS A DESARROLLAR                               *//**/
/**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**/
/**//* para la información                                                *//**/

void mostrarFinal_MIO(const void *d, FILE *fp)
{
    tFinal *fin = (tFinal *) d;
    if(fin == NULL)
    {
        fprintf(fp," D. N. I.  Apellido(s), Nombre(s)\t  CodM Cal\n");
    }
    else
    {
       fprintf(fp,"%*s %-*s %4d %2d\n", (int)sizeof(fin->dni)-1,
                         fin->dni,
                         (int)sizeof(fin->apYNom)-1,
                         fin->apYNom,
                         fin->codMat,
                         fin->calif);
    }
}


int  compararFinal_MIO(const void *d1, const void *d2)
{
    const char *s1= (const char*)d1,
               *s2= (const char*)d2;
    while (*s1 && *s1==*s2)
    {
        s1++;
        s2++;
    }
    return * (char*)s1-* (char*)s2;
}


int  acumularCalif_MIO(void **dest, unsigned *tamDest,
                       const void *orig, unsigned tamOrig)
{
    tFinal **finDest = (tFinal**) dest;
    tFinal *finOri = (tFinal*) orig;
    (*finDest)->calif += finOri->calif;
    return 1;
}


void mostrarProm_MIO(const void *d2, int cantCalif, FILE *fp)
{
    tFinal *aux = (tFinal *)d2;

    fprintf(fp,"   --- Rindio  %d final(es) con un promedio de: %2d\n\n",cantCalif,Miround(aux->calif,cantCalif));
}


/**//* para el TDA LISTA                                                  *//**/

int  mostrarDeIzqADer_MIO(const tLista *p,
                          void(*mostrar)(const void *, FILE *), FILE *fp)
{
    tNodo *act = *p;
    int cant = 0;
    if(act)
    {
        mostrar(NULL,fp);
        while(act->ant)
            act = act->ant;
        while(act)
        {
            mostrar(act->info,fp);
            act = act->sig;
            cant++;
        }
    }
    return cant;

}
int Miround(int num1,int num2)
{
    float x = (float) num1, y = (float)num2,
            div= x/y;
    int z=(int) div;
    if(div-z >= 0.5)
        return z+1;
    else
        return z;

}

void ordenarLista_MIO(tLista *p, int (*comparar)(const void *, const void *))
{
    /**/    /**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**/       /**//**/
    /**//* Aclaracion del Alumno:                                                  *//**/
    /**//* Se entiende que este metodo es poco efectivo dado a la cantidad de veces*//**/
    /**//* que se recorre la lista, se eligio este metodo por fidelidad al diagrama*//**/
    /**//* presentado por el profesor en el pdf "E_A_3"*//**/
    /**/    /**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**/       /**//**/

    if (!*p)
        return;

    tNodo* movi = *p;
    char dnimax [11];//Utilizo una cadena para encontrar el dni con mayor ocurrencias
    while (movi->ant)
        movi = movi->ant;

    tNodo* pri = movi;
    tNodo* Ord = NULL;//El Nodo Ordenado va a ser NULL para que sea el anterior del primer ordenado

    while (pri->sig){
        buscarmayorocurrencias(pri, dnimax,comparar);//busca el dni con mayor ocurrencia y lo copia e dni max

        while(movi){
            if(!comparar(dnimax, movi->info)){
                if(movi==pri)
                    pri=pri->sig;
                tNodo* ant = movi->ant,* sig = movi->sig;
                if (ant)
                    ant->sig = sig;
                if (sig){
                    sig->ant = ant;
                    *p = sig;
                }
                else
                    *p = ant;
                movi->ant = Ord;
                if(Ord)
                    Ord->sig = movi;
                Ord = movi;
                movi = sig;
                Ord->sig = pri;
                pri->ant = Ord;
            }
            else
                movi = movi->sig;
        }
        movi = pri;
    }

}
void buscarmayorocurrencias(tNodo* faltante,char* dnimax,int (*comparar)(const void *, const void *))
{
    int cont=0,max=0;
    while(faltante->sig)
    {
        tNodo* mov= faltante;
        while(mov)
        {
            if(comparar(faltante->info,mov->info)==0)
                cont++;
            mov = mov->sig;
        }
        if(cont>max)
        {
            max=cont;
            strcopiar(dnimax,faltante->info);
        }
        cont=0;
        faltante = faltante->sig;
    }
}

char* strcopiar(char *s1, const char *s2)
{
    char *aux=s1;
    while (*s2){
        *s1++ = *s2++;
        }
    *s1=*s2;
    return (char*)aux;
}

int  vaciarMostrarDetalleYProm_MIO(tLista *p, FILE *fp,
                                   int (*comparar)(const void *, const void *),
                                   int (*acumular)(void **, unsigned *,
                                                   const void *, unsigned),
                                   void (*mostrar)(const void *, FILE *),
                                   void (*mostrar2)(const void *, int, FILE *))
{
    if (!*p)
        return 0;

    int contTotal = 0, cantMaterias;
    tNodo* movi = *p;

    while (movi->ant)
        movi = movi->ant;

    while (movi){
        tFinal aux;
        tFinal* ptrAux = &aux;


        aux.calif = 0;
        strcopiar(aux.dni, movi->info);

        mostrar(NULL, fp);//encabezado
        cantMaterias = 0;
        do{
            acumular((void*)&ptrAux,(unsigned*)sizeof(tFinal), movi->info, sizeof(tFinal));
            mostrar(movi->info,fp);

            tNodo* nodoAux = movi->sig;

            free(movi->info);
            free(movi);

            movi = nodoAux;

            cantMaterias++;
            contTotal++;
        }while (movi && !comparar(aux.dni,movi->info));//Se utiliza un do while dado que la primera vez de cada dni se verifica la condicion

        mostrar2(&aux,cantMaterias, fp);
    }
    *p = NULL;
    return contTotal;
}

/**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**/

