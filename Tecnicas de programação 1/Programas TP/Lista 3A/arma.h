#ifndef ARMA_H
#define ARMA_H

class Arma;
class Arma
{
    private:
    int capacidade;
    int municao;
    public:
    int get_capacidade();
    int get_municao();
    bool disparar();
    void recarregar();
    int recarregar(int m);
    Arma();
    Arma(int c);
    Arma(int c, int m);

};

/*Crie uma classe chamada Arma que tenha dois atributos inteiros que representem a capacidade e a
quantidade de munição disponível. Os atributos devem ser privados. Crie nessa classe:
• Métodos get para os atributos.
• Construtor que não receba parâmetros e inicialize a capacidade com o valor 8.

Page 4

• Construtor que receba apenas um parâmetro inteiro e inicialize a capacidade com esse valor.
• Construtor que receba dois parâmetros inteiros e inicialize a capacidade e a munição com esses
valores.
• Um método chamado disparar sem parâmetros que, se houver munição na arma, decrementa a
quantidade de munição e retorna true; ou simplesmente retorna false caso não haja munição.
• Um método chamado recarregar sem parâmetros que faz com que a munição receba o máximo
da capacidade.
• Um método chamado recarregar que recebe a quantidade de munição que deverá ser utilizada
para recarregar a arma. O método deverá retornar um inteiro que representa a quantidade de

munição que por ventura tenha sobrado após o recarregamento. Evidentemente, se a quan-
tidade passada por parâmetro for menor ou igual do que a quantidade de munição que falta

para recarregar totalmente a arma, o método deverá retornar 0.*/

#endif // ARMA_H
