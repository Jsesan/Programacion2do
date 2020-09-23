#include "main.h"
//Main GENERICO
void* ord_selec_gen(void* pgen,size_t ce,size_t tam,int (*cmp)(const void*, const void*))
{
     void* ini = pgen;
     void* men;
     void* fin= pgen+(ce-1)*tam;
    while(pgen<fin)
    {
        men = buscar_men_elem_gen(pgen,fin,tam,cmp);
        if(pgen!=men)
            intercambiar_orden_gen(pgen,men,tam);
        pgen+=tam;
    }
    return ini;

}
void* buscar_men_elem_gen(void* pgen,void* fin,size_t tam,int (*cmp)(const void *, const void *))
{
    void* men= pgen;
    pgen+tam;
    while(pgen<=fin)
    {
        if(cmp(pgen,men)<0)
            men = pgen;
        pgen+=tam;
    }
    return men;

}
void intercambiar_orden_gen(void* plist,void* men,size_t tam)
{
    char aux[1000];
    memcpy(aux, plist, tam);
    memcpy(plist,men, tam);
    memcpy(men, aux, tam);
}
