#include "pessoa.h"

Pessoa::Pessoa(long long CPF1)
{
    CPF=CPF1;
    nome="Felipe";
    data_de_nascimento="15/07/2001";
    altura=168;
    peso=58.5;
}

Pessoa::Pessoa(long long CPF1, string n, string datan, int h, double p)
{
    CPF=CPF1;
    nome=n;
    data_de_nascimento=datan;
    altura=h;
    peso=p;
}

double Pessoa::peso_kg()
{
    return peso;
}

double Pessoa::peso_g()
{
    return peso*1000;
}

long long Pessoa::get_cpf()
{
    return CPF;
}

int Pessoa::altura_cm()
{
    return altura;
}

double Pessoa::altura_m()
{
    return (double)altura/100;
}

void data_int(string dataL,int *dia, int *mes, int *ano)
{
    int i=0,j=0;
    string novadata;
    int n=dataL.length();
    for (;i<n;i++)
    {
        if (dataL[i]!='/')
        {
            novadata[j]=dataL[i];
            j++;
        }
    }
    novadata[j]='\0';

//    for (i=0;i<n-2;i++)
//    {
//        cout<<novadata[i];
//    }
//    cout<<"***"<<endl;

    *dia=(novadata[1]-'0')+((novadata[0]-'0')*10);
    *mes=(novadata[3]-'0')+((novadata[2]-'0')*10);
    *ano=(novadata[7]-'0')+((novadata[6]-'0')*10)+((novadata[5]-'0')*100)+((novadata[4]-'0')*1000);

//    cout<<*dia<<endl<<*mes<<endl<<*ano<<endl;

}

int Pessoa::calcula_idade(string data)
{
    int diaN,mesN,anoN;
    data_int(data_de_nascimento,&diaN,&mesN,&anoN); //nas

    int diap,mesp,anop;
    data_int(data,&diap,&mesp,&anop);   //data passada

    int idade=0;

    //15 05 2001
    //14 04 2002

    if (anop<anoN)
    {
        return idade; //0
    }
    else
    {
        idade=anop-anoN;  //2005 - 2001  =  4
    }
    if (mesp<mesN)
    {
        idade--;
    }
    else
    {
        if (diap<diaN)
        {
            idade--;
        }
    }
    return idade;

}

double Pessoa::calcula_imc()
{
    return peso/(altura_m()*altura_m());
}

void Pessoa::imprimir()
{
    cout<<CPF<<endl;
    cout<<nome<<endl;
    cout<<data_de_nascimento<<endl;
    cout<<altura<<endl;
    cout<<peso<<endl;
}


DocumentoIdentidade::DocumentoIdentidade(long long CPF1, string n, string datan)
{
    CPF=CPF1;
    nome=n;
    data_de_nascimento=datan;
}

string DocumentoIdentidade::get_data_de_nascimento()
{
    return data_de_nascimento;
}

string DocumentoIdentidade::get_nome()
{
    return nome;
}

long long DocumentoIdentidade::get_cpf()
{
    return CPF;
}

Pessoa2::Pessoa2(long long CPF2, string m, string datah, int h, double p)
{
    Documentacao = new DocumentoIdentidade(CPF2,m,datah);
    altura=h;
    peso=p;
}

double Pessoa2::peso_kg()
{
    return peso;
}

double Pessoa2::peso_g()
{
    return peso*1000;
}

int Pessoa2::altura_cm()
{
    return altura;
}

double Pessoa2::altura_m()
{
    return (double)altura/100;
}

int Pessoa2::calcula_idade(string data)
{
    int diaN,mesN,anoN;
    string datinha=Documentacao->get_data_de_nascimento();
    data_int(datinha,&diaN,&mesN,&anoN); //nas

    int diap,mesp,anop;
    data_int(data,&diap,&mesp,&anop);   //data passada

    int idade=0;

    //15 05 2001
    //14 04 2002

    if (anop<anoN)
    {
        return idade; //0
    }
    else
    {
        idade=anop-anoN;  //2005 - 2001  =  4
    }
    if (mesp<mesN)
    {
        idade--;
    }
    else
    {
        if (diap<diaN)
        {
            idade--;
        }
    }
    return idade;
}

double Pessoa2::calcula_imc()
{
    return peso/(altura_m()*altura_m());
}

void Pessoa2::imprimir()
{
    cout<<Documentacao->get_cpf()<<endl;
    cout<<Documentacao->get_nome()<<endl;
    cout<<Documentacao->get_data_de_nascimento()<<endl;
    cout<<altura<<endl;
    cout<<peso<<endl;
}

Agenda::Agenda()
{
    tamanho_atual=1;
    People=new Pessoa*[tamanho_atual];
    People[0]=NULL;
}

void Agenda::RMaisUm()
{
    Pessoa** novo=new Pessoa*[tamanho_atual+1];
    novo[tamanho_atual]=NULL;
    for (int i=0;i<tamanho_atual;i++)
    {
        novo[i]=People[i];
    }
    delete[] People;
    People=novo;
    tamanho_atual++;
}

bool Agenda::incluir(Pessoa *p)
{
    int i=0;
    for (;i<tamanho_atual and People[i]!=NULL;i++); //verificar se tem espaços livres
    if (i>=tamanho_atual)
    {//caso nao tenha espaço livre, ele acrescenta mais um espaço livre na agenda
        Agenda::RMaisUm();
    }
    for (i=0;i<tamanho_atual;i++)
    {
        if (People[i]==NULL)
        {
            People[i]=p;
            return 1;
        }
    }
    return 0;
}

Pessoa* Agenda::consultar(long long cpf)
{
    long long compara;
    for (int i=0;i<tamanho_atual;i++)
    {
        if (People[i]!=NULL)
        {
            compara=People[i]->get_cpf();
            if (compara==cpf)
            {
                return People[i];
            }
        }
    }
    return NULL;
}

bool Agenda::remover(long long cpf)
{
    long long compara;
    for (int i=0;i<tamanho_atual;i++)
    {
        if (People[i]!=NULL)
        {
            compara=People[i]->get_cpf();
            if (compara==cpf)
            {
                delete People[i];
                People[i]=NULL;
                return 1;
            }
        }
    }
    return 0;
    //nao fiz o 'chega pra tras' como foi dito no enunciado
}

void Agenda::imprimir_lista()
{
    for (int i=0;i<tamanho_atual;i++)
    {
        if (People[i] != NULL)
        {
            cout<<endl<<"Pessoa num "<<i+1<<endl;
            People[i]->imprimir();
        }
    }
}

int Agenda::calcula_media(double *MP, double *MA, int *MI)
{
    int cont=0;
    string datona="28/11/2019";//data q refiz o prog
    for (int i=0;i<tamanho_atual;i++)
    {
        if (People[i]!=NULL)
        {
            *MP = *MP + People[i]->peso_kg();
            *MA = *MA + People[i]->altura_m();
            *MI = *MI + People[i]->calcula_idade(datona);
            cont++;
        }
    }
    return cont;
}

int Agenda::get_tamanho()
{
    return tamanho_atual;
}
