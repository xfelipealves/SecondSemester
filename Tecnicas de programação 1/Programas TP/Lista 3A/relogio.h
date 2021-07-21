#ifndef RELOGIO_H
#define RELOGIO_H
#include <iostream>
using namespace std;

//Numero 2
class Relogio;
class Relogio
{
    private:
        int hora;
        int minuto;
        int segundo;
    public:
        Relogio();
        bool set_horario(int hr, int min, int seg);
        void get_horario(int* hr, int* min, int* seg);
        void avancar_1_segundo();
        string imprimir();
};

/*Crie uma classe em C++ chamada Relogio para armazenar um horário, composto por hora, minuto
e segundo. A classe deve representar esses componentes de horário e deve apresentar os métodos
descritos a seguir:
• set_horario → define o horário do relógio por meio de três parâmetros inteiros (hora, minuto,
segundo).
• get_horario → retorna hora, minuto e segundo por meio de três parâmetros passados por
referência.
• avancar_1_segundo → avança um segundo no horário atual do relógio.
• imprimir → imprime o horário do relógio com o formato "HH:MM:SS".
Crie um programa que instancia um Relogio e inicializa seu horário. Em seguida, faça um laço
repetitivo com 200 iterações que, em cada iteração, chama o método avancar_1_segundo e imprime
o horário atual.*/

#endif // RELOGIO_H
