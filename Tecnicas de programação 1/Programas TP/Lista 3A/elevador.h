#ifndef ELEVADOR_H
#define ELEVADOR_H

//Numero 1
class Elevador;
class Elevador
{
    private:
        int andar_atual;
        int total_andares;
        int capacidade;
        int presentes;
    public:
        Elevador(int q, int j);
        bool entra(int pessoas_entra);
        bool sai(int pessoas_sai);
        bool sobe(int andar_subir);
        bool desce(int andar_descer);
        int get_andar_atual();
        int get_total_andares();
        int get_capacidade();
        int get_presentes();
};

/*Crie uma classe denominada Elevador para armazenar as informações de um elevador dentro de um
prédio. A classe deve armazenar o andar atual (0 = térreo e não existe subsolo), total de andares no
prédio, excluindo o térreo, capacidade do elevador, e quantas pessoas estão presentes nele. Defina
um construtor que receba a quantidade de andares do prédio e a capacidade do elevador. A classe
deve também disponibilizar os seguintes métodos:
• entra → recebe o número de pessoas que entra no elevador.
• sai → recebe o número de pessoas que sai do elevador.
• sobe → recebe o número andares que irá subir a partir do local atual.
• desce → recebe o número andares que irá descer a partir do local atual.
Não se esqueça de fazer tratamentos para o caso de querer entrar mais pessoas do que a capacidade,
sair mais pessoas do que tem dentro do elevador, subir ou descer mais andares do que é possível.
Crie um programa que teste a sua classe.*/

#endif // ELEVADOR_H
