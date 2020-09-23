/**//* 42.393.167-Sesan,JuanIgnacio-(06-2965) *//**/


/**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**/
/**//**//* CUALQUIER INCLUDE DE BIBLIOTECA QUE NECESITE, HÁGALO ACÁ   *//**//**/
#include <stdlib.h>
/**//**//* CUALQUIER INCLUDE DE BIBLIOTECA QUE NECESITE, HÁGALO ACÁ   *//**//**/
/**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**/
#include "funciones.h"
/**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**/
/**//**//* ACÁ DEBE DESARROLLAR LAS FUNCIONES Y PRIMITIVAS PEDIDAS    *//**//**/
/**//**//* ADEMÁS DE CUALQUIER OTRA FUNCIÓN QUE SE REQUIERA           *//**//**/

tNodo* buscarMenor(tNodo* desde, int (*comparar)(const void*, const void*));
int strlong(const char *str);
char* strcopiar(char *s1, const char *s2);

/**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**/
/**//* FUNCIONES Y PRIMITIVAS A DESARROLLAR                               *//**/
/**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**/
/**//* para la información                                                *//**/

void mostrarMovim_MIO(const void *d, FILE *fp)
{
    const tMovi *mov = d;
    fprintf(fp,"%*s% 10.2lf\n",(int)sizeof(mov->ctaCte)-1,mov->ctaCte,mov->saldo);//Intente utilizar el * para mostrar el saldo con un sizeof pero no lo logre, se mostraba un solo espacio entre ambos
}


int compararMovim_MIO(const void *d1, const void *d2)
{
    //Un Strcmp
    const char *s1= (const char*)d1,
               *s2= (const char*)d2;
    while (*s1 && *s1==*s2)
    {
        s1++;
        s2++;
    }
    return * (char*)s1-* (char*)s2;
}

int esCtaCte002_MIO(const void *d)
{
    const char* Cta= (const char*)d;
    char *corr = {"002"};
    Cta=Cta+(strlong(Cta)-strlong(corr));//Posicionamos en la parte de la cadena que queremos comparar
    while(*Cta)
    {
        if(*Cta==*corr)
        {
            Cta++;
            corr++;
        }
        else
            return 0;
    }

    return 1;
}

int strlong(const char *str)
{
    //Un strlen
    const char *aux= str;
    int cant=0;
        while(*aux != '\0')
        {
            cant++;
            aux++;
        }
        return cant;
}

int acumularMoviSaldo_MIO(void **dest, unsigned *tamDest,
                      const void *ori, unsigned tamOri)
{
    //Acumula dato en acum, dado que se valida antes que se deba o no se deba comparar, el retorno siempre sera 1
    tMovi *acum = *dest;
    const tMovi*dato=ori;
    acum->saldo += dato->saldo;

    return 1;
}


void mostrarTotal_MIO(const void *d, FILE *fp)
{
    const tMovi *mov = d;
    fprintf(fp, " Total cliente:%10.2f\n\n",mov->saldo);
}

char* strcopiar(char *s1, const char *s2)
{
    //Un strcpy
    char *aux=s1;
    while (*s2){
        *s1++ = *s2++;
        }
    *s1=*s2;
    return (char*)aux;
}

/**//* para el TDA LISTA                                                  *//**/

int mostrarLista_MIO(const tLista *p,
                     void (*mostrar)(const void *, FILE *), FILE *fp)
{

    int cant=0;
    fprintf(fp,"Nro Cuenta Banc   Importe\n");
    while(*p)
    {
        mostrarMovim_MIO((*p)->info,fp);
        cant++;
        p= &(*p)->sig;
    }
    return cant;
}


void ordenarLista_MIO(tLista *p, int (*comparar)(const void *, const void *))
{
    tLista *LO=p;
    if(!*p)
        return;
    while((*p)->sig)
    {

        tNodo * men = buscarMenor(*p, comparar ); //Bucamos el menor de los menores a partir de las sublistas que se vayan generando

        if(*p != men)//Si son distintos hay que "mover" el menor de los menores hacia atras
        {
            tLista *preMen= p;
            while((*preMen)->sig != men)
                preMen=&(*preMen)->sig;

            (*preMen)->sig = men->sig;
            men->sig = *p;
            if(LO == p)
            {
                *LO = men;
            }
            else
            {
                (*LO)->sig = men;
                LO= &(*LO)->sig;
            }
        }
        else //Si son iguales, significa que *p en este momento es el menor de los menores y avanzamos uno
        {
            LO=&(*LO)->sig;
            p=&(*p)->sig;
        }
    }
}

tNodo* buscarMenor(tNodo* desde, int (*comparar)(const void*, const void*))
{
    tNodo* pMenor = desde;
    tNodo* p = desde->sig;

    while(p)
    {
        if(comparar(p->info, pMenor->info) < 0)
            pMenor = p;

        p = p->sig;
    }

    return pMenor;
}

int eliminarMostrarYMostrarSubTot_MIO(tLista *p, FILE *fpPant,
                                      int comparar(const void *, const void *),
                                      int comparar2(const void *d),
                                      int acumular(void **, unsigned *,
                                                   const void *, unsigned),
                                      void mostrar(const void *, FILE *),
                                      void mostrar2(const void *, FILE *))
{
    int cantElim=0;
    tMovi Acum;//Utilizamos este auxiliar para acumular todos los saldos de ctacorr y verificar que seguimos leyendo el mismo NroCuenta
    tMovi *ptrAcum= &Acum;
    while(*p)
    {
        if(comparar2((*p)->info))//Si es cuenta corriente inicializamos el Acum
        {
            Acum.saldo=0;
            strcopiar(Acum.ctaCte,(*p)->info);
            fprintf(fpPant,"Nro Cuenta Banc   Importe\n");
                do
                {
                    mostrar((*p)->info,fpPant);
                    acumular((void *)&ptrAcum,(unsigned*)sizeof(tMovi),(*p)->info,sizeof(tMovi));//Retorno no utilizado, dado que se considera que en este caso no habria por que retornar 0
                    tNodo *elim=*p;
                    *p=elim->sig;
                    free(elim->info);
                    free(elim);
                    cantElim++;
                }while(*p && comparar2((*p)->info) && (comparar(Acum.ctaCte,(*p)->info))==0);//Se utiliza un do while dado que la primera vez siempre sera verdadero
                mostrar2(&Acum,fpPant);
        }
        else//Si no es cuenta corriente continua
            p=&(*p)->sig;
    }

    return cantElim;
}


int  vaciarListaYMostrar_MIO(tLista *p,
                             void (*mostrar)(const void *, FILE *), FILE *fp)
{
    int cant = 0;
    while(*p)
    {
        tNodo* aux = *p;

        cant ++;
        *p = aux->sig;
        if(mostrar && fp)
            mostrar(aux->info, fp);
        free(aux->info);
    }

    return cant;
}

/**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**/

