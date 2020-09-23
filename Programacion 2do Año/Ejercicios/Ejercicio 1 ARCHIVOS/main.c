#include "main.h"
int main()
{
int op;
char Opciones[CANTOP][60]={"Buscar el minimo elemento",
"Calcular el promedio de los valores de las posiciones pares",
"Mostarlo en orden inverso",
"Salir"};
float VectorFloat[CANTELEM]={0},*Punt=VectorFloat,min,prom;
int cant,Arch;
cant=CargarVector(Punt);
op=DesplegarMenu(Opciones);
switch(op){
case 1:
min=minimoelemento(Punt,cant);
printf("Elemento minimo es: %.2f",min);
break;
case 2:
prom=PromPosPares(Punt,cant);
printf("El promedio de numeros pares es: %.2f",prom);
break;
case 3:
MostrarOrdenInv(Punt,cant);
break;
default:
printf("Saliendo sin realizar ninguna operacion...");
break;
}
Arch=CargarArchicoTxt("Archivo Float.txt",Punt,cant);
if(Arch!=0)
{
printf("ERROR CARGAR ARCHIVO DE TEXTO");
}
return 0;
}
int CargarVector(float *PuntF)
{
char valor;
int i=0;
printf("Desea cargar el vector? ingrese 's' o 'n' \n");
scanf("%c",&valor);
while(valor=='s')
{
if(i<CANTELEM)
{
printf("Elemento %d: \n",i+1);
scanf("%f",PuntF+i);
printf("Desea cargar otro elemento? ingrese 's' o 'n' \n");
fflush(stdin);
scanf("%c",&valor);
i++;
}
else
{
printf("No hay mas lugar en el vector");
break;
}
}
return i;
}
int DesplegarMenu (char Opciones[CANTOP][60])
{
int op;
do{
for(int i=0;i<CANTOP;i++)
{
printf("%d) %s \n",i+1,Opciones[i]);
}
scanf("%d",&op);
}while(op<1 && op>CANTOP);

return op;
}
float minimoelemento(float *Puntf,int cant)
{
float min=*Puntf;
for(int i=0;i<cant;i++)
{
if(min>=*(Puntf+i))
min=*(Puntf+i);
}
return min;
}
float PromPosPares(float *PuntF,int cant)
{
float prom=0;
int cant2=0;
for(int i=0;i<cant;i++)
{
if((i%2)==0 || i==0)
{
prom+=*(PuntF+i);
cant2++;
}
}
return (prom/cant2);

}
void MostrarOrdenInv(float *PuntF,int cant)
{
for(int i=cant-1;i>=0;i--)
{
printf(" %.2f ",*(PuntF+i));
}
}
int CargarArchicoTxt(char * path,float *Punt,int cant)
{
int i=0;
FILE *Archtxt=fopen(path,"wt");
if(!Archtxt)
{
printf("ERROR CARGAR ARCHIVO DE TEXTO");
return -1;
}
while(i<cant)
{
fprintf(Archtxt,"%.2f \n",*(Punt+i));
i++;
}
fclose(Archtxt);
return 0;
}
