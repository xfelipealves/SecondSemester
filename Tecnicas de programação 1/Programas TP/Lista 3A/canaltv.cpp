#include "canaltv.h"

void CanalTV::set_numero(int n)
{
    numero_canal=n;
}

void CanalTV::set_nome(string n)
{
    nome_canal=n;
}

int CanalTV::get_numero()
{
    return numero_canal;
}

string CanalTV::get_nome()
{
    return nome_canal;
}

tv::tv(string c0, string c1, string c2, string c3, string c4)
{
    string nn[5];
    nn[0]=c0;
    nn[1]=c1;
    nn[2]=c2;
    nn[3]=c3;
    nn[4]=c4;
    for (int i=0;i<5;i++)
    {
        canais[i].set_nome(nn[i]);
        canais[i].set_numero(i+1);
    }
    situacao=0;
    canais_existentes=5;
    canal_selecionado=1;
}

void tv::ligar_desligar()
{
    if (situacao==false)
    {
        situacao=true;
    }
    else
    {
        situacao=false;
    }
}

bool tv::tv_ligada()
{
    return situacao;
}

int tv::numero_canal_atual()
{
    if (situacao==true)
    {
        return canal_selecionado;
    }
    else
    {
        return -1;
    }
}

string tv::nome_canal_atual()
{
    if (situacao==true)
    {
        for (int i=0;i<5;i++)
        {
            int j=canais[i].get_numero();
            if (canal_selecionado==j)
            {
                return canais[i].get_nome();
            }
        }
        return "Sem sinal";
    }
    else
    {
        return "Tv esta desligada";
    }
}

void tv::avancar_canal()
{
    if (situacao==true)
    {
        int j;
        for (int i=0;i<5;i++)
        {
            j=canais[i].get_numero();
            if (j==canal_selecionado)
            {
                if (i!=4)
                {
                    canal_selecionado=canais[i+1].get_numero();
                }
                else
                {
                    canal_selecionado=canais[0].get_numero();
                }
            }
        }
        if (j<canal_selecionado)
        {
            canal_selecionado=canais[0].get_numero();
        }
        j=canais[0].get_numero();
        if (j>canal_selecionado)
        {
            canal_selecionado=j;
        }
    }
}

void tv::retroceder_canal()
{
    if (situacao==true)
    {
        int j;
        for (int i=4;i>=0;i--)
        {
            j=canais[i].get_numero();
            if (j==canal_selecionado)
            {
                if (i!=0)
                {
                    canal_selecionado=canais[i-1].get_numero();
                }
                else
                {
                    canal_selecionado=canais[4].get_numero();
                }
            }
        }
        if (j>canal_selecionado)
        {
            canal_selecionado=canais[4].get_numero();
        }
        j=canais[4].get_numero();
        if (j<canal_selecionado)
        {
            canal_selecionado=j;
        }
    }
}

bool tv::ir_para_canal(int ir)
{
    if (situacao==false)
    {
        return false;
    }
    canal_selecionado=ir;
    for (int i=0; i<5; i++)
    {
        int j= canais[i].get_numero();
        if (j == ir)
        {
            return true;
        }
    }
    return false;
}

void tv::imprimir(int* n, string* m)
{
    if (situacao==true)
    {
        for (int i=0; i<5; i++)
        {
            int j=canais[i].get_numero();
            if (canal_selecionado==j)
            {
                *n=j;
                *m=canais[i].get_nome();
            }
        }
         *m="Sem sinal";
    }
    else
    {
         *m="Tv desta desligada";
    }
}
