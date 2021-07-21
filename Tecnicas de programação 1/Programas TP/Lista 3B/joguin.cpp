#include "joguin.h"

Espada::Espada(string nome, float dano)
{
    this->nome=nome;
    this->dano=dano;
}

float Espada::golpear()
{
    float t=rand() % 10000;
    float nzin=t/10000;
    return dano*nzin;
}

Escudo::Escudo(string nome, float defesa)
{
    this->nome=nome;
    this->defesa=defesa;
}

float Escudo::defender()
{
    float t=rand() % 10000;
    float nzin=t/10000;
    return defesa*nzin;
}

Guerreiro::Guerreiro(string nome, float vida, float resistencia, float forca, Espada* e1, Escudo* ed)
{
    this->nome=nome;
    this->vida=vida;
    this->resistencia=resistencia;
    this->forca=forca;
    this->espada=e1;
    this->escudo=ed;
}

float Guerreiro::get_vida()
{
    return vida;
}

float Guerreiro::get_resistencia()
{
    return resistencia;
}

float Guerreiro::get_forca()
{
    return forca;
}

string Guerreiro::get_nome()
{
    return nome;
}

bool Guerreiro::atacar(Guerreiro *adversario)
{
    float vidanova=adversario->get_vida()-( (forca * this->espada->golpear()) / (adversario->get_resistencia()* adversario->escudo->defender()));
    adversario->vida=vidanova;
    if (vidanova<=0)
    {
        return 1;
    }
    else {
        return 0;
    }
}
