#ifndef JOGUIN_H
#define JOGUIN_H
#include <iostream>
#include <cstdlib>
using namespace std;

class Espada;
class Escudo;
class Guerreiro;

class Espada
{
private:
    string nome;
    float dano;
public:
    Espada(string nome, float dano);
    float golpear();
};

class Escudo
{
private:
    string nome;
    float defesa;
public:
    Escudo(string nome, float defesa);
    float defender();
};

class Guerreiro
{
private:
    string nome;
    float vida;
    float resistencia;
    float forca;
    Espada* espada;
    Escudo* escudo;
public:
    Guerreiro(string nome, float vida, float resistencia, float forca, Espada* espada, Escudo* escudo);
    float get_vida();
    float get_resistencia();
    float get_forca();
    string get_nome();
    bool atacar(Guerreiro* adversario);
};


#endif // JOGUIN_H
