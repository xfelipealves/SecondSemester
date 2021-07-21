#include "elevador.h"
#include "relogio.h"
#include "retangulo.h"
#include "ponto.h"
#include "arma.h"
#include <iostream>
using namespace std;

//Tire os comentarios da questao que queira testar! :D

int main()
{
//    //Questao 1~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//    int q;
//    int j;
//    cout<<"Digite o total de andares que tera o predio: ";
//    cin>>q;
//    cout<<"Digite a capacidade de pessoas no elevador: ";
//    cin>>j;
//    Elevador ben10(q,j);
//    bool k=true;
//    int p;
//    while (k)
//    {
//        cout<<endl<<endl;
//        cout<<"1- Entra\n";
//        cout<<"2- Sai\n";
//        cout<<"3- Sobe\n";
//        cout<<"4- Desce\n";
//        cin>>p;
//        cout<<endl<<endl;
//        if (p==1)
//        {
//            int c;
//            cout<<"Digite quantas pessoas vao entrar: ";
//            cin>>c;
//            if (ben10.entra(c)==true)
//            {
//                cout<<"Entrou "<<c<<endl;
//            }
//            else
//            {
//                cout<<"Nao tem capacidade para todos"<<endl;
//            }
//        }
//        if (p==2)
//        {
//            int c;
//            cout<<"Digite quantas pessoas vao sair: ";
//            cin>>c;
//            if (ben10.sai(c)==true)
//            {
//                cout<<"Saiu "<<c<<endl;
//            }
//            else
//            {
//                cout<<"Nao tem como sair mais do que tem dentro"<<endl;
//            }
//        }
//        if (p==3)
//        {
//            int c;
//            cout<<"Digite quantos andares vai subir: ";
//            cin>>c;
//            if (ben10.sobe(c)==true)
//            {
//                cout<<"Subiu "<<c<<endl;
//            }
//            else
//            {
//                cout<<"Nao tem como subir mais que o maximo"<<endl;
//            }
//        }
//        if (p==4)
//        {
//            int c;
//            cout<<"Digite quantos andares vai descer: ";
//            cin>>c;
//            if (ben10.desce(c)==true)
//            {
//                cout<<"Desceu "<<c<<endl;
//            }
//            else
//            {
//                cout<<"Nao tem como descer mais que o minimo"<<endl;
//            }
//        }
//        cout<<endl;
//        cout<<"Capacidade: "<<ben10.get_capacidade()<<endl;
//        cout<<"Andares totais: "<<ben10.get_total_andares()<<endl;
//        cout<<"Andar atual: "<<ben10.get_andar_atual()<<endl;
//        cout<<"Presentes: "<<ben10.get_presentes()<<endl;
//        cout<<endl<<"Digite 1 para voltar ao MENU ou 0 para SAIR"<<endl;
//		cin>>k;
//    }

//    //Questão 2~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//    Relogio omnitrix;
//    for (int i=0; i<200; i++)
//    {
//        omnitrix.avancar_1_segundo();
//    }
//    string j=omnitrix.imprimir();
//    cout<<j<<endl;

//    //Questao 4~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//    cout<<"Digite a base a altura: ";
//    int bz, hrf;
//    cin>>bz>>hrf;
//    Retangulo bolinha(bz, hrf);
//    cout<<"Area: "<<bolinha.area()<<endl;
//    cout<<endl;
//    bolinha.imprimir1();
//    cout<<endl<<endl;

//    char n;
//    cout<<"Qual caractere deve ser usado: ";
//    cin>>n;
//    bolinha.imprimir2(n);
//    cout<<endl<<endl;

//    char mz;
//    cout<<"Qual caractere contorno e qual dentro: ";
//    cin>>n>>mz;
//    bolinha.imprimir3(n,mz);

//    //Questão 5~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//    float ax,ay,bx,by,cx,cy;
//    cout<<"Digite as cordenadas do ponto A: ";
//    cin>>ax>>ay;
//    cout<<"Digite as cordenadas do ponto B: ";
//    cin>>bx>>by;
//    cout<<"Digite as cordenadas do ponto C: ";
//    cin>>cx>>cy;

//    Triangulo tt(ax,ay,bx,by,cx,cy);

//    cout<<"Lado AB: ";
//    cout<<tt.lado_AB()<<endl;
//    cout<<"Lado AC: ";
//    cout<<tt.lado_AC()<<endl;
//    cout<<"Lado BC: ";
//    cout<<tt.lado_BC()<<endl;
//    cout<<endl<<"Tipo do triangulo: ";
//    int i=tt.tipo_triangulo();
//    if (i==1)
//    {
//        cout<<"Equilatero"<<endl;
//    }
//    if (i==2)
//    {
//        cout<<"Isosceles"<<endl;
//    }
//    if (i==3)
//    {
//        cout<<"Escaleno"<<endl;
//    }
//    if (i==-1)
//    {
//        cout<<"Nao forma triangulo"<<endl;
//    }
//    if (i==0)
//    {
//        cout<<"Deu ruim kkkkk"<<endl;
//    }

//    //Questao 7~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//    int ca,cb;
//    cout<<"Digite a capacidade da arma A e da arma B: ";
//    cin>>ca>>cb;
//    Arma a(ca);
//    Arma b(cb);
//    int op=true;
//    bool sit;
//    int k;
//    cout<<endl;
//    while (op!=0)
//    {
//        cout<<"1 - Disparar com a arma A"<<endl;
//        cout<<"2 - Disparar com a arma B"<<endl;
//        cout<<"3 - Recarregar a arma A"<<endl;
//        cout<<"4 - Recarregar a arma B"<<endl;
//        cout<<"5 - SAIR"<<endl;
//        cin>>k;
//        if (k==1)
//        {
//            sit=a.disparar();
//            if (sit==1)
//            {
//                cout<<endl<<"BANG"<<endl;
//            }
//            else
//            {
//                cout<<endl<<"CLICK"<<endl;
//            }
//        }
//        if (k==2)
//        {
//            sit=b.disparar();
//            if (sit==1)
//            {
//                cout<<endl<<"BANG"<<endl;
//            }
//            else
//            {
//                cout<<endl<<"CLICK"<<endl;
//            }
//        }
//        if (k==3)
//        {
//            a.recarregar();
//            cout<<endl<<"Arma A foi recarregada!"<<endl;
//        }
//        if (k==4)
//        {
//            b.recarregar();
//            cout<<endl<<"Arma B foi recarregada!"<<endl;
//        }
//        if (k==5)
//        {
//            op=0;
//        }
//        cout<<endl<<endl;
//        cout<<"Arma A "<<endl<<"Capacidade: "<<a.get_capacidade()<<endl<<"Municao: "<<a.get_municao()<<endl<<endl;
//        cout<<"Arma B "<<endl<<"Capacidade: "<<b.get_capacidade()<<endl<<"Municao: "<<b.get_municao()<<endl<<endl;
//        cout<<endl;
//    }

    return 0;
}
