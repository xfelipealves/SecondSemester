#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
using namespace std;

int main()
{
    srand(time(NULL));
    int tt=100;
    int g[tt];
    for (int i=0;i<tt;i++)
    {
        g[i]=rand()%100 + 1;
    }

    ofstream arq2("/home/puc/nomecria.txt");
    for (int i=0;i<tt;i++)
    {
        arq2<<g[i]<<endl;
    }
    arq2.close();
    int j;

    ofstream imp("/home/puc/impar.txt");
    ofstream par("/home/puc/par.txt");

    ifstream arq1("/home/puc/nomecria.txt");
    while (arq1.eof()==0)
    {
        arq1>>j;
        if (j%2!=0)
        {//impar
            imp<<j<<endl;
        }
        else {
            par<<j<<endl;
        }
    }
    imp.close();
    par.close();



//    ifstream arq("/home/puc/nomes.txt");
//    string n;
//    arq>>n;
//    arq.eof(); //acabou = true, nao acabou = false

    //gerar 100 numeros randomicos e imprimir numero por numero por linha 0 a 99

    //abrir o arquivo e ler os numeros 1 por 1 e criar dois arquivos, criar dois arquivos, um com numeros pares e outro com numeros impares


    return 0;
}
