#include "main.h"
int main()
{
    printf("\n\t\t--------Structs--------\n");
    t_persona listado[]={
        {12,'F',"Renata"},
        {25,'M',"Juan"},
        {0,'M',"Nahuel"},
        {9,'F',"Sophia"},
        {2,'F',"Mercedes"}};
    int ceper=sizeof(listado)/sizeof(t_persona);
    t_persona* pgen=listado;
    mostrarvecpersona(listado,ceper);
    ord_selec_gen(listado,ceper,sizeof(t_persona),cmp_pers_sex);
    printf("\n\n");
    mostrarvecpersona(listado,ceper);
    return 0;
}
