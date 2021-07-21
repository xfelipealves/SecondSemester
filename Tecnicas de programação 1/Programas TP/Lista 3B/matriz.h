#ifndef MATRIZ_H
#define MATRIZ_H
#include <iostream>
using namespace std;

class Matriz;
class Matriz
{
private:
    int linha;
    int coluna;
    float** ponterin;
public:
    Matriz(int linha, int coluna);
    float get(int i, int j);
    void set(int i, int j, float x);
    Matriz soma(Matriz B);
    Matriz soma(int n);
    Matriz subtrai(Matriz B);
    Matriz subtrai(int n);
    Matriz multiplica(Matriz B);
    Matriz transposta();
    void imprimir();
};

#endif // MATRIZ_H
