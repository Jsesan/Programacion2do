#include "main.h"
int CargarArch1(char * path)
{
    t_empleado empleados[]={
                            {500,"Bottarini","Mercedes",10000.05},
                            {300,"Cordoba","Jose",40000.05},
                            {400,"Nardillo","Santiago",20000.05},
                            {100,"Sesan","Juan Ignacio",15800.85},
                            {200,"Sesan","Sophia Rachel",18800.65},
    };
    FILE * arch1=fopen(path,"wb");
    if(!arch1)//(pf==NULL)
        return 0;
    fwrite(empleados,sizeof(empleados),1,arch1);//Cargamos vector entero, por eso 1 sola vez, si cargamos por registro-->fwrite(empleados,sizeof(t_empleado),5,arch1);

    fclose(arch1);
    return 1;
}
int CargarArch2(char * path)
{
    t_estudiante estudiantes[]={
                            {500,"Bottarini","Mercedes",7.05},
                            {400,"Nardillo","Santiago",8.5},
                            {100,"Sesan","Juan Ignacio",8},
                            {200,"Sesan","Sophia Rachel",6.99},
    };
    FILE * arch2=fopen(path,"wb");
    if(!arch2)//(pf==NULL)
        return 0;
    fwrite(estudiantes,sizeof(estudiantes),1,arch2);//Cargamos vector entero, por eso 1 sola vez, si cargamos por registro-->fwrite(empleados,sizeof(t_empleado),5,arch1);

    fclose(arch2);
    return 1;
}
