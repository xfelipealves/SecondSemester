#include "retangulo.h"
#include <iostream>
using namespace std;
Retangulo::Retangulo(int b, int h)
{
    base=b;
    altura=h;
}

int Retangulo::area()
{
    return base*altura;
}

void Retangulo::imprimir1()
{
    if (base<=50)
    {
        for (int i=0;i<base;i++)
        {
            for (int j=0;j<altura;j++)
            {
                cout<<'#';
            }
            cout<<endl;
        }
    }
    else
    {
        int b=20*50/base;
        for (int i=0;i<b;i++)
        {
            for (int j=0;j<altura;j++)
            {
                cout<<'#';
            }
            cout<<endl;
        }
    }
    cout<<endl;
}

void Retangulo::imprimir2(char m)
{
    if (base<=50)
    {
        for (int i=0;i<base;i++)
        {
            for (int j=0;j<altura;j++)
            {
                cout<<m;
            }
            cout<<endl;
        }
    }
    else
    {
        int b=20*50/base;
        for (int i=0;i<b;i++)
        {
            for (int j=0;j<altura;j++)
            {
                cout<<m;
            }
            cout<<endl;
        }
    }
    cout<<endl;
}

void Retangulo::imprimir3(char m, char n)
{
    if (base<=50)
    {
        for (int i=0;i<base;i++)
           {
                cout<<m;
                for (int j=1;j<altura;j++)
                {
                    if (i==0 or i==base-1 or j==altura-1)
                    {
                        cout<<m;
                    }
                    else
                    {
                        cout<<n;
                    }
                }
                cout<<endl;
            }
    }
    else
    {
        int b=20*50/base;
        for (int i=0;i<b;i++)
           {
                cout<<m;
                for (int j=1;j<altura;j++)
                {
                    if (i==0 or i==b-1 or j==altura-1)
                    {
                        cout<<m;
                    }
                    else
                    {
                        cout<<n;
                    }
                }
                cout<<endl;
            }
    }
    cout<<endl;
}
