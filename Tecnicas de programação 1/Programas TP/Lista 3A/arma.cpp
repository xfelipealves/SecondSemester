#include "arma.h"

int Arma::get_capacidade()
{
    return capacidade;
}

int Arma::get_municao()
{
    return municao;
}

bool Arma::disparar()
{
    if (municao>0)
    {
        municao--;
        return true;
    }
    else
    {
        return false;
    }
}

void Arma::recarregar()
{
    municao=capacidade;
}

int Arma::recarregar(int m)
{
    if (m<0)
    {
        return 0;
    }
    if (m<=(capacidade-municao))
    {
        municao=municao+m;
        return 0;
    }
    else
    {
        m=m-(capacidade-municao);
        municao=capacidade;
        return m;
    }
}

Arma::Arma()
{
    capacidade=8;
    municao=0;
}

Arma::Arma(int c)
{
    if (c>0)
    {
        capacidade=c;
        municao=0;
    }
}

Arma::Arma(int c, int m)
{
    if (c>0 and m<=c)
    {
        capacidade=c;
        municao=m;
    }
}
