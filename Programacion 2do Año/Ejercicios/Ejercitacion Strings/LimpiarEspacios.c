void LimpiarEspacios(char* ptrC)
{
    /*Limpiamos los primeros espacios*/
    int i=0,cant=0,x=0;
    cant=MYstrlen(ptrC);
    do{
        if(*ptrC==' ')
        {
            for(i=0;i<cant;i++)
            {
             *(ptrC+i)=*(ptrC+i+1);
            }
        }
    }while(*ptrC==' ');
    /*Limpiamos los espacios entremedio */
    i=0;
    while(*(ptrC+i)!=0)
    {
        if(*(ptrC+i)==' ' && *(ptrC+i+1)==' ')
        {
            x=i;
            for(;x<cant;x++)
            {
             *(ptrC+x)=*(ptrC+x+1);
            }

        }
        else
        {
        i++;
        }
    }
}
