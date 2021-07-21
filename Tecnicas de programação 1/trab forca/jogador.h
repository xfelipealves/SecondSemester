#ifndef JOGADOR_H
#define JOGADOR_H
#include <iostream>
using namespace std;

class jogador;
class jogador
{
private:
    string nome;
    long long tempo;
public:
    jogador(string n,long long t);
    long long getTempo();
};

#endif // JOGADOR_H
