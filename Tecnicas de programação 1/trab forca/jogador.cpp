#include "jogador.h"

jogador::jogador(string n, long long t)
{
    nome=n;
    tempo=t;
}

long long jogador::getTempo()
{
    return tempo;
}
