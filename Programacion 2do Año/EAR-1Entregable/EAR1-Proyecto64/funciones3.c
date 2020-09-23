/**//* 42.393.167-SESAN,JuanIgnacio-(06-2965) *//**/


#include "funciones.h"
#include <string.h>
#include <stdlib.h>

#define MINIMO( X , Y ) ((X)<=(Y)?(X):(Y))

/**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**/
/**//* FUNCIONES A DESARROLLAR                                            *//**/
/**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**/
/**//**//**//* PUNTO 3                                            *//**//**//**/
/**/


int  procesarPedidos_MIO(FILE *fpPedi, FILE *fpPend, FILE *fpMayo, FILE *fpMeno,FILE *fpPant)
{
    tPila pilita,pilota;
    double importe=0;
    int pendie;
    tPedi pedido,pedaux;
    char Codaux[11];

    crearPila_MIO(&pilita);
    crearPila_MIO(&pilota);
    fread(&pedido,sizeof(tPedi),1,fpPedi);
    while(!feof(fpPedi))
    {
        pendie=0;
        importe=0;
        strcpy(Codaux,pedido.codClie);
        while(strcmp(Codaux,pedido.codClie)==0 && !feof(fpPedi))
        {
            if(pedido.precUnit == 0)
                pendie=1;
            importe += (pedido.cant * pedido.precUnit);
            ponerEnPila_MIO(&pilota,&pedido,sizeof(tPedi));
            fread(&pedido,sizeof(tPedi),1,fpPedi);
        }
            while(!pilaVacia_MIO(&pilota))
            {
                sacarDePila_MIO(&pilota,&pedaux,sizeof(tPedi));
                ponerEnPila_MIO(&pilita,&pedaux,sizeof(tPedi));
            }
        if(pendie==1)
        {
            while(!pilaVacia_MIO(&pilita))
            {
                sacarDePila_MIO(&pilita,&pedaux,sizeof(tPedi));
                fwrite(&pedaux,sizeof(tPedi),1,fpPend);
            }
        }
        else
        {
            if(importe > MAYOR_QUE)
            {
                fprintf(fpMayo,"Pedido del cliente %10s por %10.2lf\n\n",Codaux,importe);
                fprintf(fpMayo,"CodProduc\tCant.\tPrecUnit\tSubtotal\n");
                while(!pilaVacia_MIO(&pilita))
                {
                    sacarDePila_MIO(&pilita,&pedaux,sizeof(tPedi));
                    fprintf(fpMayo,"%10s\t%d\t%10.2lf\t%10.2lf\n",pedaux.codProd,pedaux.cant,pedaux.precUnit,
                            pedaux.cant*pedaux.precUnit);
                }
                fprintf(fpMayo,"\n\n\n");
            }
            else
            {
                fprintf(fpMeno,"Pedido del cliente %10s por %10.2lf\n\n",Codaux,importe);
                fprintf(fpMeno,"CodProduc\tCant.\tPrecUnit\tSubtotal\n");
                while(!pilaVacia_MIO(&pilita))
                {
                    sacarDePila_MIO(&pilita,&pedaux,sizeof(tPedi));
                    fprintf(fpMeno,"%10s\t%d\t%10.2lf\t%10.2lf\n",pedaux.codProd,pedaux.cant,pedaux.precUnit,
                            pedaux.cant*pedaux.precUnit);
                }
                fprintf(fpMeno,"\n\n\n");
            }
        }
        vaciarPila_MIO(&pilita);
    }
    return 1;
}

/**//**//**//*  DESARROLLE LAS PRIMITIVAS DE PILA CON ASIGNACIÓN  *//**//**//**/
/**//**//**//*  DINÁMICA DE MEMORIA COMO TIENE ESTÁ EN LA BIBLIO- *//**//**//**/
/**//**//**//*  GRAFÍA PROVISTA EN EL CURSO EN LA  [SEMANA 7]     *//**//**//**/

void crearPila_MIO(tPila *p)
{
    *p= NULL;
}


int  pilaLlena_MIO(const tPila *p, unsigned cantBytes)
{
    tNodo *aux = (tNodo *)malloc(sizeof(tNodo));
   void *info = malloc(cantBytes);
   free (aux);
   free(info);
   return aux==NULL || info==NULL;

}


int  ponerEnPila_MIO(tPila *p, const void *d, unsigned cantBytes)
{
    tNodo *nue;

    if((nue = (tNodo *) malloc(sizeof(tNodo))) == NULL
        ||
        (nue->info = malloc(cantBytes)) == NULL)
    {
        free (nue);
        return 0;
    }
    memcpy(nue->info,d,cantBytes);
    nue->tamInfo=cantBytes;
    nue->sig = *p;
    *p =  nue;
    return 1;

}


int  verTope_MIO(const tPila *p, void *d, unsigned cantBytes)
{
    if(*p == NULL)
        return 0;
    memcpy(d,(*p)->info,MINIMO(cantBytes,(*p)->tamInfo));
    return 1;

}


int  pilaVacia_MIO(const tPila *p)
{
    return *p == NULL;

}


int  sacarDePila_MIO(tPila *p, void *d, unsigned cantBytes)
{
     tNodo *aux = *p;
    if(aux == NULL)
        return 0;
    *p = aux->sig;
    memcpy(d,aux->info,MINIMO(cantBytes,aux->tamInfo));
    free(aux->info);
    free(aux);
    return 1;

}


void vaciarPila_MIO(tPila *p)
{
     while(*p)
    {
        tNodo *aux = *p;
        *p = aux->sig;
        free(aux->info);
        free(aux);
    }

}

/**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**/

