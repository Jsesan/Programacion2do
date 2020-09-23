#include "main.h"
int main()
{
    int i,j;
    i=CargarArchivoTxtLongVar("Estudiantes_Txt.txt");
    if(i!=0)
    {
        printf("Error");
    }
    j=GuardarArchTxtLongVar_to_ArchBin("Estudiantes_Txt.txt","Estudiantes_Bin.dat");
    if(j!=0)
    {
        printf("Error");
    }
    return 0;
}
int CargarArchivoTxtLongFija(char * path)
{
    FILE *Archtxt=fopen(path,"wt");
    t_estudiante estudiantes[]={
                            {500,"Perez Jose",10.00},
                            {400,"Merce Pelota",8.5},
                            {100,"James LeBron",8},
                            {200,"Jordan Michael",6.99},
    };
    if(!Archtxt)
    {
        printf("ERROR CARGAR ARCHIVO DE TEXTO");
        return -1;
    }
    for(int i=0;i<4;i++)
    {
        fprintf(Archtxt,"%08d%-29s%05.2f\n",estudiantes[i].dni,estudiantes[i].apyn,estudiantes[i].promedio);
    }
    fclose(Archtxt);
    return 0;
}
int GuardarArchTxtLongFija_to_ArchBin(char * path,char * path1)
{
    t_estudiante estudiante;
   FILE *Archtxt=fopen(path,"rt");
   FILE *Archbin=fopen(path1,"wb");
   char texto[42];
   while(fgets(texto,sizeof(texto),Archtxt))
   {
       if(!strchr(texto,'\n'))
       {
           return 2;
       }
       sscanf(texto, "%8d%29[^\n]%5f",
              &estudiante.dni,
              estudiante.apyn,
              &estudiante.promedio);
        fwrite(&estudiante,sizeof(t_estudiante),1,Archbin);
   }
   fclose(Archtxt);
   fclose(Archbin);
   return 0;
}
int CargarArchivoTxtLongVar(char * path)
{
    t_estudiante estudiantes[]={
                            {500,"Bottarini Mercedes",7.05},
                            {400,"Carrettoni Renata",8.5},
                            {100,"Sesan Juan Ignacio",8},
                            {200,"Sesan Sophia Rachel",6.99},
    };
    int i=0;
    FILE *Archtxt=fopen(path,"wt");
    if(!Archtxt)
    {
        printf("ERROR CARGAR ARCHIVO DE TEXTO");
        return -1;
    }
    while(i<4)
    {
        fprintf(Archtxt,"%d|%s|%.2f\n",estudiantes[i].dni,estudiantes[i].apyn,estudiantes[i].promedio);
        i++;
    }
    fclose(Archtxt);
    return 0;
}
int GuardarArchTxtLongVar_to_ArchBin(char * path,char * path1)
{
    t_estudiante estudiante;
   FILE *Archtxt=fopen(path,"rt");
   FILE *Archbin=fopen(path1,"wb");
   int i,j,z;
   char texto[44],auxint[8]={0},auxfloat[5]={0};
   while(fgets(texto,sizeof(texto),Archtxt))
   {
       i=0;
       j=0;
       z=0;
       while(texto[i]!='|')
       {
           auxint[i]=texto[i];
           i++;
       }
       i++;
       estudiante.dni= atoi(auxint);
       while(texto[i]!='|'&& texto[i]!='\0')
       {
           estudiante.apyn[z]=texto[i];
           i++;
           z++;
       }
       i++;
       while(texto[i]!='|' && texto[i]!='\n')
       {
           auxfloat[j]=texto[i];
           j++;
           i++;
       }
       estudiante.promedio=atof(auxfloat);
       printf("%d|%s|%f\n",estudiante.dni,estudiante.apyn,estudiante.promedio);
       fwrite(&estudiante,sizeof(t_estudiante),1,Archbin);
   }

   fclose(Archtxt);
   fclose(Archbin);
   return 0;

}

