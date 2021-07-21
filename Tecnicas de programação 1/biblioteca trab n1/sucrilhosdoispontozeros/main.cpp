#include <iostream>
#include<stdlib.h>
#include <minhalib.h>
using namespace std;

int main()
{
    MinhaLib sucrilhos;

    int valorf;
    cout<<"**BIM VINDO AO SUCRILHOS.H! A BIBLIOTECA 1010!**"<<endl<<endl;
    bool enquanto=1;
    while (enquanto)
    {
        cout<<"--|||||----_||||_-------------------"<<endl;
        cout<<"-|-_|-_|--|||_||--------------------"<<endl;
        cout<<"-|||||||-|||||--|--|----------------"<<endl;
        cout<<"-|||||||--|||||_--------------------"<<endl;
        cout<<"-|-|-|-|---|||||--------------------"<<endl<<endl;

        cout<<" Menu SuPiMpA: "<<endl<<endl;
        cout<<"  1 - Desenha Retangulo"<<endl;
        cout<<"  2 - Area de um circulo"<<endl;
        cout<<"  3 - Volume de uma esfera"<<endl;
        cout<<"  4 - Fatorial de um numero"<<endl;
        cout<<"  5 - Verifica primo"<<endl;
        cout<<"  6 - Iesimo termo de Fibonacci"<<endl;
        cout<<"  7 - Numero regular"<<endl;
        cout<<"  8 - Combinacao"<<endl;
        cout<<"  9 - Verifica palindromo"<<endl;
        cout<<" 10 - To Lower Case"<<endl;
        cout<<" 11 - To Upper Case"<<endl;
        cout<<" 12 - Caixa com texto centralizado (nao feita)"<<endl;
        cout<<" 13 - Ordenacao crescente"<<endl;
        cout<<" 14 - Quantidade de caracteres"<<endl;
        cout<<" 15 - Compara string"<<endl;
        cout<<" 16 - String to int"<<endl;
        cout<<" 17 - Retira caracteres branco inicio fim"<<endl;
        cout<<" 18 - Separa string em substring"<<endl;
        cout<<" 19 - Primeira ocorrencia"<<endl;
        cout<<" 20 - Soma numeros gigantes"<<endl;

        cout<<endl<<"Qual funcao deseja testar?"<<endl;
        cin>>valorf;
        system("clear");
        sucrilhos.prin(valorf);

        cout<<endl<<endl<<"Digite 1 para ver o menu novamente ou 0 para sair"<<endl;
        cin>>enquanto;
        system("clear");
    }
    cout<<endl<<"Muito obrigado! Sayonara! Bye Bye! Hasta La Vista! Tchau!"<<endl;


    return 0;
}
