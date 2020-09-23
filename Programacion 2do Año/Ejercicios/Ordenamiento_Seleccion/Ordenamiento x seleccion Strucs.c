#include "main.h"
//Main para estructuras
void funcionmainstrucs()
{
    printf("\n\t\t--------Structs--------\n");
    t_persona listado[]={
        {12,'F',"Renata"},
        {25,'M',"Juan"},
        {0,'M',"Nahuel"},
        {9,'F',"Sophia"},
        {2,'F',"Mercedes"}};
    int ceper=sizeof(listado)/sizeof(t_persona);
    t_persona* plist=listado;
                //Mostrar Vector sin ordenar
                mostrarvecpersona(listado,ceper);
                printf("\n\n");
                        //Ordenar por seleccion (dni)
                        ord_selec_persona(plist,ceper,cmp_pers_dni);
                        mostrarvecpersona(listado,ceper);
                        printf("\n\n");
                            //Mostrar vector ordenado (sexo)
                            ord_selec_persona(plist,ceper,cmp_pers_sex);
                            mostrarvecpersona(listado,ceper);
                            printf("\n\n");
                                //Mostrar vector ordenado (nombre)
                                ord_selec_persona(plist,ceper,cmp_pers_nombre);
                                mostrarvecpersona(listado,ceper);
}

//Con una estructura
void mostrarvecpersona(t_persona list[],int ce)
{
    for(int i=0;i<ce;i++)
    {
       printf("|%d,%c,%s|",list[i].dni,list[i].sexo,list[i].nomb);
    }
}
t_persona* ord_selec_persona(t_persona* plist,int ce,int (*cmp)(const t_persona *, const t_persona *))
{
     t_persona* ini = plist;
     t_persona* men;
     t_persona* fin= plist + ce -1;
    while(plist<fin)
    {
        men = buscar_men_elem_persona(plist,fin,cmp);
        if(plist!=men)
            intercambiar_orden_persona(plist,men);
        plist++;
    }
    return ini;

}
t_persona* buscar_men_elem_persona(t_persona* plist,t_persona* fin,int (*cmp)(const t_persona *, const t_persona *))
{
    t_persona* men= plist;
    plist++;
    while(plist<=fin)
    {
        if(cmp(plist,men)<0)
            men = plist;
        plist++;
    }
    return men;

}
void intercambiar_orden_persona(t_persona* plist,t_persona* men)
{
    t_persona aux= *plist;
    *plist = *men;
    *men = aux;
}
int cmp_pers_dni(const t_persona* p1,const t_persona* p2)
{
    return p1->dni - p2->dni;
}
int cmp_pers_sex(const t_persona* p1,const t_persona* p2)
{
    return p1->sexo - p2->sexo;
}
int cmp_pers_nombre(const t_persona* p1,const t_persona* p2)
{
    return strcmp(p1->nomb,p2->nomb);
}
