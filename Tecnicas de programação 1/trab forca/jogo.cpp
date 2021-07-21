#include "jogo.h"

bool Jogo::vencer()
{
    if (palavra==palavraR)
        return true;
    return false;
}

Jogo::Jogo(string p)
{
    palavra=p;
    tamanhoPalavra=0;
    palavraR=palavra;
    for (int i=0;palavra[i]!='\0';i++)
    {
        tamanhoPalavra++;
    }
    for (int i=0;i<tamanhoPalavra;i++)
    {
        palavraR[i]='_';
    }
}

bool Jogo::chute(string n)
{
    if (n==palavra)
        return true;
    return false;
}

string Jogo::getPR()
{
    return palavraR;
}

string Jogo::getP()
{
    return palavra;
}

int Jogo::verificar(char n)
{
    int v=0;
    for (int i=0;i<tamanhoPalavra;i++)
    {
        if (palavra[i]==n)
        {
            palavraR[i]=n;
            v=2;
        }
    }
    if (vencer())
    {
        return 1;
    }
    return v;
}

