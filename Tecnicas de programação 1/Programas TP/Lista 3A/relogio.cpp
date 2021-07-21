#include "relogio.h"

//Numero 2
Relogio::Relogio()
{
    hora=minuto=segundo=0;
}

bool Relogio::set_horario(int hr, int min, int seg)
{
    if (seg>=60 or min>=60)
    {
        return 0;
    }
    segundo=seg;
    minuto=min;
    hora=hr;
    return 1;
}

void Relogio::get_horario(int *hr, int *min, int *seg)
{
    *hr=hora;
    *min=minuto;
    *seg=segundo;
}

void Relogio::avancar_1_segundo()
{
    segundo++;
    if (segundo==60)
    {
        segundo=0;
        minuto++;
    }
    if (minuto==60)
    {
        minuto=0;
        hora++;
    }
}

string Relogio::imprimir()
{
    char c[9];
    c[0]='0';
    c[1]='0';
    c[2]=':';
    c[3]='0';
    c[4]='0';
    c[5]=':';
    c[6]='0';
    c[7]='0';
    c[8]='\0';
    int hra;
    int mim;
    int sego;
    get_horario(&hra,&mim,&sego);
    if (hra>9)
    {
        int j=hra/10;
        c[0]=j+'0';
        int k=hra-j*10;
        c[1]=k+'0';
    }
    else
    {
        c[1]=hra+'0';
    }

    if (mim>9)
    {
        int j=mim/10;
        c[3]=j+'0';
        int k=mim-j*10;
        c[4]=k+'0';
    }
    else
    {
        c[4]=mim+'0';
    }

    if (sego>9)
    {
        int j=sego/10;
        c[6]=j+'0';
        int k=sego-j*10;
        c[7]=k+'0';
    }
    else
    {
        c[7]=sego+'0';
    }
    return c;
}
