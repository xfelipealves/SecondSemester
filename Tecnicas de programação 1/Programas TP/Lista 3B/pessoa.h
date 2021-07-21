#ifndef PESSOA_H
#define PESSOA_H
#include <iostream>
using namespace std;

class Pessoa;
class DocumentoIdentidade;
class Pessoa2;
class Agenda;

class Pessoa
{
private:
    long long CPF;
    string nome;
    string data_de_nascimento;
    int altura;  //cm
    double peso;  //kg
public:
    Pessoa(long long CPF1);
    Pessoa(long long CPF1, string n, string datan, int h, double p);
    double peso_kg();
    double peso_g();
    long long get_cpf(); //pro ex 3
    int altura_cm();
    double altura_m();
    int calcula_idade(string data);
    double calcula_imc();
    void imprimir();
};

class DocumentoIdentidade
{
private:
    long long CPF;
    string nome;
    string data_de_nascimento;
public:
    DocumentoIdentidade(long long CPF1, string n, string datan);
    string get_data_de_nascimento();
    string get_nome();
    long long get_cpf();
};

class Pessoa2
{
private:
    DocumentoIdentidade* Documentacao;
    int altura;
    double peso;
public:
    Pessoa2(long long CPF1, string n, string datan, int h, double p);
    double peso_kg();
    double peso_g();
    int altura_cm();
    double altura_m();
    int calcula_idade(string data);
    double calcula_imc();
    void imprimir();
};

class Agenda
{
private:
    Pessoa** People;
    int tamanho_atual;
public:
    Agenda();
    void RMaisUm();
    bool incluir(Pessoa* p);
    Pessoa* consultar(long long cpf);
    bool remover(long long cpf);
    void imprimir_lista();
    int calcula_media(double* MP, double* MA, int* MI);
    int get_tamanho();
};


#endif // PESSOA_H
