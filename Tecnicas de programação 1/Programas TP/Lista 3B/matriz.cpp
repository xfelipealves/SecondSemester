#include "matriz.h"


Matriz::Matriz(int linha, int coluna)
{
    this->linha=linha;
    this->coluna=coluna;
    ponterin=new float*[linha];
    for (int i=0;i<linha;i++)
    {
        ponterin[i]=new float[coluna];
        for (int j=0;j<coluna;j++)
        {
            ponterin[i][j]=0;
        }
    }

}

float Matriz::get(int i, int j)
{
    return ponterin[i][j];
}

void Matriz::set(int i, int j, float x)
{
    ponterin[i][j]=x;
}

Matriz Matriz::soma(Matriz B)
{
    if (B.linha!=linha or B.coluna!=coluna)
    {
        Matriz a(0,0);
        return a;
    }
    Matriz g(linha, coluna);
    for (int i=0;i<linha;i++)
    {
        for (int j=0;j<coluna;j++)
        {
            g.ponterin[i][j]=ponterin[i][j]+B.ponterin[i][j];
        }
    }
    return g;
}

Matriz Matriz::soma(int n)
{
    Matriz g(linha, coluna);
    for (int i=0;i<linha;i++)
    {
        for (int j=0;j<coluna;j++)
        {
            g.ponterin[i][j]=ponterin[i][j]+n;
        }
    }
    return g;
}

Matriz Matriz::subtrai(Matriz B)
{
    if (B.linha!=linha or B.coluna!=coluna)
    {
        Matriz a(0,0);
        return a;
    }
    Matriz g(linha, coluna);
    for (int i=0;i<linha;i++)
    {
        for (int j=0;j<coluna;j++)
        {
            g.ponterin[i][j]=ponterin[i][j]-B.ponterin[i][j];
        }
    }
    return g;
}

Matriz Matriz::subtrai(int n)
{
    Matriz g(linha, coluna);
    for (int i=0;i<linha;i++)
    {
        for (int j=0;j<coluna;j++)
        {
            g.ponterin[i][j]=ponterin[i][j]-n;
        }
    }
    return g;
}

Matriz Matriz::multiplica(Matriz B)
{
    //MATRIZ*B
    if (coluna!=B.linha)
    {
        Matriz a(0,0);
        return a;
    }
    Matriz r(linha,B.coluna);
    for (int i=0;i<linha;i++)
    {
        for (int j=0;j<B.coluna;j++)
        {
            r.ponterin[i][j]=0;
        }
    }
    for (int i=0;i<linha;i++)
    {
        for (int j=0;j<B.coluna;j++)
        {
            for (int k=0;k<coluna;k++)
            {
                r.ponterin[i][j]=r.ponterin[i][j]+ponterin[i][k]*B.ponterin[k][j];
            }
        }
    }
    return r;
}

Matriz Matriz::transposta()
{
    Matriz r(coluna,linha);
    for (int i=0;i<coluna;i++)
    {
        for (int j=0;j<linha;j++)
        {
            r.ponterin[i][j]=ponterin[j][i];
        }
    }
    return r;
}

void Matriz::imprimir()
{
    for (int i=0;i<linha;i++)
    {
        for (int j=0;j<coluna;j++)
        {
            cout<<ponterin[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}
