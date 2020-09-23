#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void funcionmainenteros();
int* ord_selec_int(int* ptint,int ce);
void mostrarvec(int vec[],int ce);
int* buscar_men_elem(int* ptint,int* fin);
void intercambiar_orden(int* ptint,int* men);
typedef struct{
            int dni;
            char sexo;
            char nomb[15];
                    }t_persona;
t_persona* ord_selec_persona(t_persona* plist,int ce,int (*cmp)(const t_persona *, const t_persona *));
t_persona* buscar_men_elem_persona(t_persona* plist,t_persona* fin,int (*cmp)(const t_persona *, const t_persona *));
void mostrarvecpersona(t_persona lista[],int ce);
int cmp_pers_dni(const t_persona *,const t_persona*);
int cmp_pers_nombre(const t_persona* p1,const t_persona* p2);
int cmp_pers_sex(const t_persona* p1,const t_persona* p2);
void intercambiar_orden_persona(t_persona* plist,t_persona* men);
/// .h Generico
void* ord_selec_gen(void* pgen,size_t ce,size_t tam,int (*cmp)(const void*, const void*));
void* buscar_men_elem_gen(void* pgen,void* fin,size_t tam,int (*cmp)(const void *, const void *));
void intercambiar_orden_gen(void* plist,void* men,size_t tam);
#endif // MAIN_H_INCLUDED
