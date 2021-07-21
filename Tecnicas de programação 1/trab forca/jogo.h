#ifndef JOGO_H
#define JOGO_H
#include <iostream>
using namespace std;

class Jogo;
class Jogo
{
private:
    string palavra;
    int tamanhoPalavra;
    string palavraR;
    bool vencer();
public:
    Jogo(string p);
    bool chute(string n);
    string getPR();
    string getP();
    int verificar(char n);
};

#endif // JOGO_H
