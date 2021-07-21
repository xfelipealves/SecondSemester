#ifndef JOGO_H
#define JOGO_H
#include <iostream>
#include <cstdlib>
#include <fstream>
#include <jogador.h>
#include <ctime>
using namespace std;

class Jogo;
class Jogo
{
private:
    jogador *rank;  //jogador
    string palavra;   //palavra sorteada
    int tamanhoPalavra;     //tamanho da palavra sorteada
    string palavraR;    //palavra em pontos
    long long ti,tf,tp;     //tempo do jogo
    bool vencer();          //metodo de verificar se o jogador venceu ao completar a palavra com letras
    string palavrasB[50];   //biblioteca de palavras
    char *letrasUsadas;
    int vida;
public:
    Jogo();     //construtor jogo
    ~Jogo();    //destrutor jogo
    bool chute(string n);   //chute te palavra, true=venceu, false=perdeu, além disso ele verifica se o jogador venceu
    string getPR();     //get palavra a descobrir
    string getP();      //get palavra sorteada
    string getRN();     //get nome do jogador do rank
    long long getTp();  //get tempo de partida do jogador atual
    long long getTJ();  //get tempo recorde do jogador no rank
    int getVida();  //get vida restante
    int verificar(char n);  //verificar a letra que foi digitada, returns: 3 - nao tem, 1 - venceu, 2 - tem, -1 perdeu, -2 LETRA JA USAda
    void lerPalavras();     //ler palavras (metodo auxiliar)
    bool perderVida();  //metodo de perder vida caso erre a letra
    void novojogo();    //novo jogo
    string getLetras();     //retorna as letras usadas
    bool verificaLetra(char k);   //verifica se a letra ja foi digitada, true nao foi, false foi
};

#endif // JOGO_H
