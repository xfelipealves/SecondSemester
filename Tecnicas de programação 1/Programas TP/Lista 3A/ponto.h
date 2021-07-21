#ifndef PONTO_H
#define PONTO_H

class Ponto;
class Triangulo;
class Ponto
{
    private:
    float x;
    float y;

    public:
    void set_x(float xx);
    float get_x();
    void set_y(float yy);
    float get_y();
    Ponto();
};

class Triangulo
{
    private:
    Ponto A;
    Ponto B;
    Ponto C;

    public:
    float lado_AB();
    float lado_AC();
    float lado_BC();
    int tipo_triangulo();
    Triangulo(float ax, float ay, float bx, float by, float cx, float cy);
};

/*Crie uma classe chamada Ponto que tenha apenas dois atributos float: as coordenadas x e y. Agora,
crie uma classe chamada Triangulo que tenha apenas três atributos do tipo Ponto: A, B e C. Crie
um construtor para a classe Triangulo que receba os três pontos que o definem. Agora, na classe
Triangulo crie os seguintes métodos:
• lado_AB → retorna o tamanho do lado formado pelos pontos A e B do triângulo.
• lado_AC → retorna o tamanho do lado formado pelos pontos A e C do triângulo.
• lado_BC → retorna o tamanho do lado formado pelos pontos B e C do triângulo.
• tipo_triangulo → retorna 1, se o triângulo é equilátero, 2 se o triângulo é isósceles, 3 se o
triângulo é escaleno ou -1 se os pontos não formam um triângulo (caso em que pelo menos dois
pontos são iguais).
Crie um programa para testar sua classe.*/

#endif // PONTO_H
