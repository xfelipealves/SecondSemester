#ifndef JOGODAVELHAPRO_H
#define JOGODAVELHAPRO_H

class JogoDaVelhaPro;
class JogoDaVelhaPro
{
private:
    int n;
    char** m;
    bool marcar(int i, int j, char simbolo);
public:
    JogoDaVelhaPro();
    JogoDaVelhaPro(int h);
    char verificar_status();
    int get_tamanho_tabuleiro();
    char get_celula(int i, int j);
    bool marcar_circulo(int i, int j);
    bool marcar_xis(int i, int j);
};

#endif // JOGODAVELHAPRO_H
