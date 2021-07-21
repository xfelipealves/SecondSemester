#include "jogodavelhapro.h"

bool JogoDaVelhaPro::marcar(int i, int j, char simbolo)
{
    char h=verificar_status();
    if (h==0)
    {
        return 0;
    }
    if (i<0 or i>n or j>n or j<0)
    {
        return 0;
    }
    if (m[i][j]!='-')
    {
        return 0;
    }
    m[i][j]=simbolo;
    return 1;
}

JogoDaVelhaPro::JogoDaVelhaPro()
{
    n=3;
    m=new char*[3];
    for (int gg=0; gg<n; gg++)
    {
        m[gg]=new char[3];
        for (int hh=0; hh<n; hh++)
        {
            m[gg][hh]='-';
        }
    }
}

JogoDaVelhaPro::JogoDaVelhaPro(int q)
{
    n=q;
    m=new char*[q];
    for (int gg=0; gg<n; gg++)
    {
        m[gg]=new char[q];
        for (int hh=0; hh<n; hh++)
        {
            m[gg][hh]='-';
        }
    }
}

char JogoDaVelhaPro::verificar_status()
{
    char v=1;
    int hh,gg;
    for (gg=0; gg<n and v==1; gg++)
    { //vitoria em linha
        for (hh=0; hh<n-1 and m[gg][hh]==m[gg][hh+1]; hh++);
        if (hh==(n-1))
        {
            v=m[gg][hh-1];
        }
    }
    if (v!=1)
    {
        return v;
    }
    for (hh=0; hh<n and v==1; hh++)
    { //vitoria em coluna
        for (gg=0; gg<n-1 and m[gg][hh]==m[gg+1][hh]; gg++);
        if (gg==(n-1))
        {
            v=m[gg][hh-1];
        }
    }
    if (v!=1)
    {
        return v;
    }
    for (gg=0; gg<n-1 and m[gg][gg]==m[gg+1][gg+1]; gg++); //diagonal principal
    if (gg==n-1)
    {
        v=m[gg-1][gg-1];

        return v;
    }
    for (gg=n-1; gg>0 and m[gg][gg]==m[gg-1][gg-1]; gg--); //diagonal secundaria
    if (gg==0)
    {
        v=m[gg+1][gg+1];

        return v;
    }
    v=0;
    for (gg=0; gg<n and v==0; gg++)
    {//se ainda tem espaço em branco pra poder ser marcado
        for (hh=0; hh<n and v==0; hh++)
        {
            if (m[gg][hh]=='-')
            {
                v=1;
            }
        }
    }
    if (v==1)
    {
        return v;  //espaço em branco
    }

    return v;  //velha
}

int JogoDaVelhaPro::get_tamanho_tabuleiro()
{
    return n;
}

char JogoDaVelhaPro::get_celula(int i, int j)
{
    if (i<=n and j<=n)
    {
        return m[i][j];
    }
    return '5';  //posicao desejada nao existe
}

bool JogoDaVelhaPro::marcar_circulo(int i, int j)
{
    if (m[i][j]=='-')
    {
        m[i][j]='O';
        return true;
    }
    return false;
}

bool JogoDaVelhaPro::marcar_xis(int i, int j)
{
    if (m[i][j]=='-')
    {
        m[i][j]='X';
        return true;
    }
    return false;
}
