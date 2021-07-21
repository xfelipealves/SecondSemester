#include <iostream>
#include <pessoa.h>
#include <joguin.h>
#include <numerocomplexo.h>
#include <matriz.h>
#include <cstdlib>
using namespace std;

int main()
{
//    //teste pessoa;;;~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//    long long b;
//    cout<<"CPF:";
//    cin>>b;
//    string n;
//    cout<<"NOME:";
//    cin>>n;
//    string na;
//    cout<<"NASC:";
//    cin>>na;
//    Pessoa2 k(b,n,na,168,58.5);
//    k.imprimir();
//    bool j=true;
//    string mm;
//    while (j)
//    {
//        cout<<"DATA:";
//        cin>>mm;
//        cout<<k.calcula_idade(mm)<<endl;
//        cin>>j;
//    }

//    //teste Agenda;;;~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//    Agenda braba;
//    char a;
//    bool j=true;
//    while (j)
//    {
//        cout<<"I > criar uma pessoa, ler cpf, nome, data de nascimento, altura e peso e incluir na agenda."<<endl;
//        cout<<"C > ler cpf, consultar na agenda e imprimir a pessoa encontrada."<<endl;
//        cout<<"R > ler cpf e remover a pessoa da agenda."<<endl;
//        cout<<"L > listar todas as pessoas da agenda."<<endl;
//        cout<<"M > imprimir a media de peso, a media de altura e a media idade de todas as pessoas armazenadas na agenda."<<endl;
//        cout<<"X > sai do laco e encerra o programa."<<endl;
//        cout<<endl<<"Opcao:";
//        cin>>a;
//        if (a=='i')
//        {
//            string nome,datinha;
//            long long cp2;
//            double pesin;
//            int altt;
//            cout<<endl<<"Arquivando pessoa:"<<endl;
//            cout<<"Digite o nome:";
//            cin>>nome;
//            cout<<"Digite a Data de nascimento:";
//            cin>>datinha;
//            cout<<"Digite o CPF:";
//            cin>>cp2;
//            cout<<"Digite o Peso:";
//            cin>>pesin;
//            cout<<"Digite a Altura:";
//            cin>>altt;
//            if (braba.incluir( new Pessoa(cp2,nome,datinha,altt,pesin) ) )
//            {
//                cout<<"Pessoa arquivada com sucesso!"<<endl;
//            }
//            else
//            {
//                cout<<"Deu ruim! o.O"<<endl;
//            }
//        }
//        if(a=='c')
//        {
//            long long c1;
//            cout<<"Digite o CPF da pessoa para consultar:";
//            cin>>c1;
//            if (braba.consultar(c1)!=NULL)
//            {
//                Pessoa* rastafari=braba.consultar(c1);
//                rastafari->imprimir();
//            }
//            else
//            {
//                cout<<"Pessoa nao cadastrada"<<endl<<endl;
//            }
//        }
//        if (a=='r')
//        {//ta dando erro no delete '-'
//            long long c;
//            cout<<"Digite o CPF da pessoa para remover:";
//            cin>>c;
//            if (braba.remover(c))
//            {
//                cout<<"Pessoa removida com sucesso!"<<endl;
//            }
//            else
//            {
//                cout<<"CPF nao cadastrado"<<endl;
//            }
//        }

//        if (a=='l')
//        {
//            braba.imprimir_lista();
//        }

//        if (a=='m')
//        {
//            double MP=0;
//            double MA=0;
//            int MI=0;
//            int cont=braba.calcula_media(&MP,&MA,&MI);
//            cout<<endl<<"Media de peso:";
//            cout<<MP/cont;
//            cout<<endl<<"Media de altura:";
//            cout<<MA/cont;
//            cout<<endl<<"Media de idade:";
//            cout<<MI/cont;
//            cout<<endl<<"Tem no total "<<cont<<" pessoas arquivadas na agenda"<<endl;
//        }

//        if (a=='x')
//        {
//            j=false;
//        }
//        cout<<endl;
//    }

//        //teste luta~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//        srand(time(NULL));
//        string n,n1,nome;
//        float dano,defesa,vida,resistencia,forca;
//        cout<<"Digite o nome e dano da espada do guerreiro 1: ";
//        cin>>n>>dano;
//        Espada* jota=new Espada(n,dano);
//        cout<<endl<<"Digite o nome e defesa do escudo do guerreiro 1: ";
//        cin>>n1>>defesa;
//        Escudo* ipisulon=new Escudo(n1,defesa);
//        cout<<endl<<"Digite o nome, vida, resistencia e forca do guerreiro 1: ";
//        cin>>nome>>vida>>resistencia>>forca;
//        Guerreiro pt(nome,vida,resistencia,forca,jota,ipisulon);
//        delete jota;
//        delete ipisulon;

//        cout<<endl<<endl;

//        cout<<"Digite o nome e dano da espada do guerreiro 2: ";
//        cin>>n>>dano;
//        jota=new Espada(n,dano);
//        cout<<endl<<"Digite o nome e defesa do escudo do guerreiro 2: ";
//        cin>>n1>>defesa;
//        ipisulon=new Escudo(n1,defesa);
//        cout<<endl<<"Digite o nome, vida, resistencia e forca do guerreiro 2: ";
//        cin>>nome>>vida>>resistencia>>forca;
//        Guerreiro ad(nome,vida,resistencia,forca,jota,ipisulon);
//        delete jota;
//        delete ipisulon;
//        int c=3;
//        while (pt.get_vida()>0 and ad.get_vida()>0)
//        {
//            cout<<endl<<endl<<"ANTES!"<<endl<<endl;
//            cout<<endl<<"Guerreiro 1:";
//            cout<<endl<<"Nome: "<<pt.get_nome();
//            cout<<endl<<"Vida: "<<pt.get_vida();
//            cout<<endl<<endl<<"Guerreiro 2: ";
//            cout<<endl<<"Nome: "<<ad.get_nome();
//            cout<<endl<<"Vida: "<<ad.get_vida();
//            cout<<endl<<endl;

//            if (c%2!=0)
//            {
//                pt.atacar(&ad);
//            }
//            else {
//                ad.atacar(&pt);
//            }

//            cout<<endl<<endl<<"DEPOIS!"<<endl<<endl;
//            cout<<endl<<"Guerreiro 1:";
//            cout<<endl<<"Nome: "<<pt.get_nome();
//            cout<<endl<<"Vida: "<<pt.get_vida();
//            cout<<endl<<endl<<"Guerreiro 2: ";
//            cout<<endl<<"Nome: "<<ad.get_nome();
//            cout<<endl<<"Vida: "<<ad.get_vida();
//            cout<<endl<<endl;

//            c++;
//        }

//    //teste matriz~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//    bool j=true;
//    int l,c;
//    float x;
//    cout<<endl<<"Digite as dimensoes da matriz (linha e coluna): ";
//    cin>>l>>c;
//    Matriz a(l,c);
//    a.imprimir();
//    cout<<endl<<"Digite os valores da sua matriz: ";
//    for (int i=0;i<l;i++)
//    {
//        for (int j=0;j<c;j++)
//        {
//            cin>>x;
//            a.set(i,j,x);
//        }
//    }
//    a.imprimir();
//    int op;
//    while (j)
//    {
//        cout<<endl<<"Escolha uma funcao: "<<endl;
//        cout<<"1 - Get valor na posicao i j"<<endl;
//        cout<<"2 - Set valor na posicao i j"<<endl;
//        cout<<"3 - soma a matriz com o valor n"<<endl;
//        cout<<"4 - subtrai a matriz com o valor n"<<endl;
//        cout<<"5 - cria uma matriz b e soma ela com a primeira"<<endl;
//        cout<<"6 - cria uma matriz b e subtrai ela com a primeira"<<endl;
//        cout<<"7 - cria uma matriz b e multiplica ela com a primeira"<<endl;
//        cout<<"8 - cria uma matriz transposta da primeira e imprime"<<endl;
//        cout<<"9 - imprime a primeira matriz"<<endl;
//        cout<<"0 - sair do programa"<<endl;
//        cin>>op;
//        if (op==0)
//        {
//            j=false;
//        }
//        if (op==1)
//        {
//            int i,j;
//            cout<<endl<<"Digite o valor de i e j: ";
//            cin>>i>>j;
//            cout<<a.get(i,j)<<endl;
//        }
//        if (op==2)
//        {
//            int i,j;
//            cout<<endl<<"Digite o valor de i e j: ";
//            cin>>x;
//            a.set(i,j,x);
//        }
//        if (op==3)
//        {
//            int n;
//            cout<<endl<<"Digite o valor de n: ";
//            cin>>n;
//            Matriz d(l,c);
//            d=a.soma(n);
//            d.imprimir();
//        }
//        if (op==4)
//        {
//            int n;
//            cout<<endl<<"Digite o valor de n: ";
//            cin>>n;
//            Matriz d(l,c);
//            d=a.subtrai(n);
//            d.imprimir();
//        }
//        if (op==5)
//        {
//            Matriz d(l,c);
//            for (int i=0;i<l;i++)
//            {
//                for (int j=0;j<c;j++)
//                {
//                    cin>>x;
//                    d.set(i,j,x);
//                }
//            }
//            Matriz r(l,c);
//            r=a.soma(d);
//            r.imprimir();
//        }
//        if (op==6)
//        {
//            Matriz d(l,c);
//            for (int i=0;i<l;i++)
//            {
//                for (int j=0;j<c;j++)
//                {
//                    cin>>x;
//                    d.set(i,j,x);
//                }
//            }
//            Matriz r(l,c);
//            r=a.subtrai(d);
//            r.imprimir();
//        }
//        if (op==7)
//        {
//            int p,q;
//            cout<<endl<<"Digite as dimensoes da matriz B: ";
//            cin>>p>>q;
//            Matriz d(p,q);
//            for (int i=0;i<p;i++)
//            {
//                for (int j=0;j<q;j++)
//                {
//                    cin>>x;
//                    d.set(i,j,x);
//                }
//            }
//            Matriz r(l,q);
//            r=a.multiplica(d);
//            r.imprimir();
//        }
//        if (op==8)
//        {
//            Matriz d(c,l);
//            d=a.transposta();
//            d.imprimir();
//        }
//        if (op==9)
//        {
//            a.imprimir();
//        }
//    }



    //teste numerocomplexo~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    float x,y;
    cout<<"Digite o valor do numero complexo (parte real) (parte imaginaria): ";
    cin>>x>>y;
    NumeroComplexo a(x,y);
    bool j=true;
    int op;
    while (j)
    {
        cout<<endl<<"Escolha uma opcao: "<<endl;
        cout<<"1- Imprimir a parte real do numero complexo"<<endl;
        cout<<"2- Imprimir a parte imaginaria do numero complexo"<<endl;
        cout<<"3- Criar um novo numero complexo e realizar a soma com o primeiro"<<endl;
        cout<<"4- Criar um novo numero complexo e realizar a subtracao com o primeiro"<<endl;
        cout<<"5- Criar um novo numero complexo e realizar a multiplicacao com o primeiro"<<endl;
        cout<<"6- Criar um novo numero complexo e realizar a divisao com o primeiro"<<endl;
        cout<<"7- Imprimir o numero complexo"<<endl;
        cout<<"0- Sair do programa"<<endl;
        cin>>op;
        if (op==0)
        {
            j=false;
        }
        if (op==1)
        {
            cout<<a.parte_real();
        }
        if (op==2)
        {
            cout<<a.parte_imginaria();
        }
        if (op==3)
        {
            cout<<"Digite o valor do numero complexo (parte real) (parte imaginaria): ";
            cin>>x>>y;
            NumeroComplexo b(x,y);
            NumeroComplexo r;
            r=a.soma(b);
            r.imprimir();
        }
        if (op==4)
        {
            cout<<"Digite o valor do numero complexo (parte real) (parte imaginaria): ";
            cin>>x>>y;
            NumeroComplexo b(x,y);
            NumeroComplexo r;
            r=a.subtrai(b);
            r.imprimir();
        }
        if (op==5)
        {
            cout<<"Digite o valor do numero complexo (parte real) (parte imaginaria): ";
            cin>>x>>y;
            NumeroComplexo b(x,y);
            NumeroComplexo r;
            r=a.multiplica(b);
            r.imprimir();
        }
        if (op==6)
        {
            cout<<"Digite o valor do numero complexo (parte real) (parte imaginaria): ";
            cin>>x>>y;
            NumeroComplexo b(x,y);
            NumeroComplexo r;
            r=a.divide(b);
            r.imprimir();
        }
        if (op==7)
        {
            a.imprimir();
        }
    }


    return 0;
}
