#ifndef RETANGULO_H
#define RETANGULO_H

class Retangulo;
class Retangulo
{
    private:
    int base;
    int altura;

    public:
    int area();
    void imprimir1();
    void imprimir2(char m);
    void imprimir3(char m, char n);
    Retangulo(int b, int h);
};

/*Crie uma classe chamada Retangulo que tenha apenas dois atributos inteiros: base e altura. Crie um
construtor para a classe Retangulo que receba essa base e essa altura. Agora, na classe Retangulo
crie os seguintes métodos:
• area → retorna a área do retângulo.

• imprimir → imprime o retângulo no terminal utilizando apenas o caractere # de forma pro-
porcional ao tamanho de até 50 colunas.

– Exemplo 1: base é 20 e a altura é 30.
Como a base é quem define a quantidade de colunas no terminal e como 20 é menor do
que 50, deverá ser impresso no terminal 30 linhas contendo 20 caracteres # cada linha.
– Exemplo 2: base é 70 e a altura é 20.
Como a base é quem define a quantidade de colunas no terminal e como 70 é maior do
que 50, deverá ser impresso no terminal 14 linhas contendo 50 caracteres # cada linha.
Esse número de linhas é obviamente deduzido a partir do arredondamento do resultado
da multiplicação de 20 por 50 ÷ 70, que é a proporção que deve ser considerada ao reduzir
o tamanho da base de 70 para 50.
• imprimir → uma sobrecarga do método anterior que recebe o caractere a ser impresso.
• imprimir → uma sobrecarga dos métodos anteriores, mas que recebe o caractere a ser impresso
no contorno e o caractere a ser impresso no interior do retângulo.
Crie um programa para testar sua classe.*/

#endif // RETANGULO_H
