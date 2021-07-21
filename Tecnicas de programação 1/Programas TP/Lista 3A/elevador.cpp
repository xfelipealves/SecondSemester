#include "elevador.h"

//Numero 1
Elevador::Elevador(int q, int j)
{
    andar_atual=0;
    total_andares=q;
    capacidade=j;
    presentes=0;
}

bool Elevador::entra(int pessoas_entra)
{
    if (pessoas_entra>(capacidade-presentes))
    {
        return 0;
    }
    else {
        presentes=presentes+pessoas_entra;
        return 1;
    }
}

bool Elevador::sai(int pessoas_sai)
{
    if (pessoas_sai>presentes)
    {
        return 0;
    }
    else {
        presentes=presentes-pessoas_sai;
        return 1;
    }
}

bool Elevador::sobe(int andar_subir)
{
    if (andar_subir>(total_andares-andar_atual))
    {
        return 0;
    }
    else {
        andar_atual=andar_atual+andar_subir;
        return 1;
    }
}

bool Elevador::desce(int andar_descer)
{
    if (andar_descer>andar_atual)
    {
        return 0;
    }
    else {
        andar_atual=andar_atual-andar_descer;
        return 1;
    }
}

int Elevador::get_andar_atual()
{
    return andar_atual;
}

int Elevador::get_total_andares()
{
    return total_andares;
}

int Elevador::get_capacidade()
{
    return capacidade;
}

int Elevador::get_presentes()
{
    return presentes;
}

