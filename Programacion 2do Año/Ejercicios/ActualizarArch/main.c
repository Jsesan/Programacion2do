#include "main.h"
int main()
{
    t_estudiante estudiante;
    t_empleado empleado;
    FILE *arch1,*arch2;
    CargarArch1("Empleados.dat");
    CargarArch2("Estudiantes.dat");
    //Comenzamos a leer los archivos
    arch1=fopen("Empleados.dat","r+b");
    arch2=fopen("Estudiantes.dat","rb");
    fread(&empleado,sizeof(t_empleado),1,arch1);
    fread(&estudiante,sizeof(t_estudiante),1,arch2);
    //comienza la actualizacion
    while(!feof(arch1) && !feof(arch2))
    {
        while(estudiante.dni!=empleado.dni)//Si no son la misma persona la salteamos hasta encontrar a la misma persona
        {
            fread(&empleado,sizeof(t_empleado),1,arch1);
        }
        if((estudiante.dni==empleado.dni)&& (estudiante.promedio>7))//si son la misma persona y tiene prom mayor  a 7 aumentamos el sueldo
        {
            empleado.sueldo+=(empleado.sueldo*0.0728);
            fseek(arch1,(long)-sizeof(t_empleado),SEEK_CUR);
            fwrite(&empleado,sizeof(t_empleado),1,arch1);
            fseek(arch1,0,SEEK_CUR);
        }
            fread(&empleado,sizeof(t_empleado),1,arch1);
            fread(&estudiante,sizeof(t_estudiante),1,arch2);
    }
    rewind(arch1);//devuelve el puntero al inicio del arch
    rewind(arch2);
    //leemos el archivo para verificar que se haya actualizado
    fread(&empleado,sizeof(t_empleado),1,arch1);
    while(!feof(arch1))
    {
        printf("\nEmpleado: %s\n DNI:%d\n SUELDO: %lf",empleado.apellido,empleado.dni,empleado.sueldo);
        fread(&empleado,sizeof(t_empleado),1,arch1);
    }
    return 0;
}
