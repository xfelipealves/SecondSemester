#ifndef CANALTV_H
#define CANALTV_H
#include <string>
#include <iostream>
using namespace std;

class CanalTV;
class CanalTV
{
    private:
    int numero_canal;
    string nome_canal;

    public:
    void set_numero(int n);
    void set_nome(string n);
    int get_numero();
    string get_nome();

};

class tv;
class tv
{
    private:
    bool situacao;
    int canais_existentes;
    int canal_selecionado;
    CanalTV canais[5];

    public:
    void ligar_desligar();
    bool tv_ligada();
    int numero_canal_atual();
    string nome_canal_atual();
    void avancar_canal();
    void retroceder_canal();
    bool ir_para_canal(int ir);
    void imprimir(int* n, string* m);
    tv(string c0, string c1, string c2, string c3, string c4);

};

/*Crie uma classe chamada CanalTV que tenha dois atributos: o número do canal e o nome do canal.
Crie uma outra classe chamada TV que tenha apenas quatro atributos: uma variável de situação
do tipo bool que indica se a TV está ligada (onde o valor true indica que está ligada e o valor
false indica que está desligada), quantidade de canais existentes, canal selecionado (não é a posição
do canal no vetor, mas o número efetivo do canal) e um vetor de canais (pode ser fixo CanalTV
canais[5]; ou dinâmico CanalTV* canais). Na classe TV, crie ainda os seguintes métodos:
• ligar_desligar → não recebe parâmetros e altera a situação da TV de ligada para desligada
ou de desligada para ligada.
• tv_ligada → não recebe parâmetros e retorna true caso a TV esteja ligada ou false caso
contrário.

• numero_canal_atual → se a TV estiver ligada, retorna o número do canal atualmente seleci-
onado. Se estiver desligada, retorna -1.

• nome_canal_atual → se a TV estiver ligada, retorna o nome do canal atualmente selecionado.
Caso o canal selecionado seja um número de um canal que não existe no vetor de canais, deverá
retornar o texto "Sem sinal". Se estiver desligada retorna "TV está desligada".

• avancar_canal → se a TV estiver ligada, altera o canal atual para o número do canal EXIS-
TENTE no vetor de canais imediatamente maior do que o canal atual. Caso o canal atual seja

o maior número entre os canais existentes no vetor de canais, o próximo deverá ser aquele com

Page 3

o menor número. Caso o número do canal atual seja um número que nenhum canal no vetor
de canais possui, a regra será a mesma: avança para o imediatamente maior após o número do
canal atual. O método não precisa retornar nada. Se a TV não estiver ligada, não faz nada.
• retroceder_canal → faz a mesma coisa que o método avancar_canal, mas ao invés de
avançar para o canal imediatamente maior, retrocede ao canal imediatamente menor.
• ir_para_canal → recebe um número inteiro que é o canal que deseja-se acessar diretamente.
Se a TV estiver ligada, o canal atual passa a ser esse, independente de ele existir no vetor de
canais. Mas o método deve retornar true caso o canal exista ou false caso não exista no
vetor de canais. Caso a TV esteja desligada, não deve fazer nada e retornar false.
• imprimir → Se a TV estiver ligada, imprime o número e o nome do canal selecionado. Caso
o canal selecionado não exista no vetor de canais, deve-se imprimir "Sem sinal" no lugar do
nome do canal. Se a TV estiver desligada, imprime "TV está desligada".*/

#endif // CANALTV_H
