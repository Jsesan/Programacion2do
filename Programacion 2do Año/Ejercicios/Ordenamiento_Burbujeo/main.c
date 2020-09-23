#include "Ordenamiento por burbuja.h"
int main()
{
    //int vector[]={2,1,3,17,31,11},*ptr=vector;
    //float vectorfloat[]={1.5,1.1};
    //float *ptrf=vectorfloat;
    alumnos alumnitos[]={ {42,"Juan"},
             {39,"Alan"}};
    int ce=2;
    /*for(int z=0;z<ce;z++)
    {
        printf("|%.2f|",vectorfloat[z]);
    }*/
    Ord_Burbuja_gen(ptrf,ce,sizeof(float),cmp_float);
    for(int z=0;z<ce;z++)
    {
        printf("|%d|",alumnitos[z].dni);
    }
    return 0;
}
///Para un generico
void* Ord_Burbuja_gen(void *punt,size_t ce,size_t tam,int (*cmp)(const void *, const void *))
{   int i=1,hubcam=1,j;
    void *ini=punt;
    while(hubcam&&i<ce)
    {   hubcam=0;
        for(j=0;j<ce-i;j++)
        {
            if(cmp((punt+(j*tam)),(punt+((j+1)*tam)))>0)
            {
                intercambio_gen((punt+(j*tam)),(punt+((j+1)*tam)),tam);
                hubcam=1;
            }
        }
        i++;
    }
    return ini;
}
void intercambio_gen(void* p,void* a,size_t tam)
{
    char aux[1000];
    memcpy(aux,p,tam);
    memcpy(p,a,tam);
    memcpy(a,aux,tam);
}
int cmp_int(const int *a,const int *b)
{

    return  *a - *b;
}
float cmp_float(const float *a,const float *b)
{

    return  *a - *b;
}
