#include "jogo.h"

bool Jogo::vencer()
{
    srand(time(NULL));
    if (palavra==palavraR)  //se a palavra ja foi completada
    {
        tf=time(0);
        tp=tf-ti;
        return true;
    }
    return false;
}

Jogo::Jogo()
{
    novojogo();
    palavrasB[0]="";
    tp=0;
    letrasUsadas=new char[26];
    for (int i = 0; i < 26; ++i) {
        letrasUsadas[i]=NULL;
    }
}

Jogo::~Jogo()
{
    delete rank;
    delete letrasUsadas;
}

bool Jogo::chute(string n)
{
    srand(time(NULL));
    tf=time(0);
    tp=tf-ti;
    if (n==palavra)
    {
        return true;    //chute certo = venceu! :D
    }
    vida=0;
    return false;   //chute incorreto = perdeu! :(
}

string Jogo::getPR()
{
    return palavraR;
}

string Jogo::getP()
{
    return palavra;
}

string Jogo::getRN()
{
    return rank->getNome();
}

long long Jogo::getTp()
{
    if (tp==0)
    {
        tf=time(0);
        tp=tf-ti;
    }
    return tp;
}

long long Jogo::getTJ()
{
    return rank->getTempo();
}

int Jogo::getVida()
{
    return vida;
}

int Jogo::verificar(char n)
{
    if(!verificaLetra(n))
        return -2;
    int v=3;    //padrao de nao tem aquela letra e vida--
    for (int i=0;i<tamanhoPalavra;i++)
    {
        if (palavra[i]==n)
        {
            palavraR[i]=n;
            v=2;    //tem a letra
        }
    }
    if (vencer())   //verifica o metodo vencer, se retornar true
    {//retornou true
        return 1;   //o jogador venceu!!
    }
    if (v==3)   //se pode perder vida
    {
        if (!perderVida())
        {
            return -1;
        }
    }
    return v;   //3 ou 2
}

void Jogo::lerPalavras()
{
    ifstream arq1("palavras-linux.txt");    //leitura palavras
    for (int i=0;i<50;i++)
    {
        getline(arq1,palavrasB[i]);
    }
    arq1.close();
}

bool Jogo::perderVida()
{
    if (vida>0) //ainda tem vida a perder
    {
        vida--;
        if (vida==0)
            return false;   //cabo vida
        return true;    //ainda pode continuar
    }
    return false;   //nao pode continuar porque acabou a vida!
}

void Jogo::novojogo()
{
    srand(time(nullptr));
    if (palavrasB[0]=="")
        lerPalavras();

    int j=rand()%49 + 0;
    tp=0;
    palavra=palavrasB[j];   //sorteando uma palavra
    tamanhoPalavra=palavra.size();  //tamanho da palavra
    palavraR="";
//    for (int i=0;palavra[i]!='\0';i++)
//    {
//        tamanhoPalavra++
//    }
    for (int i=0;i<tamanhoPalavra;i++)
    {
        palavraR+='_';
    }

    string nzin;
    long long tempo;
    ifstream venc("vencedor.txt");  //lendo o jogador no rank
    venc>>nzin;
    venc>>tempo;

    rank=new jogador(nzin,tempo);   //mantendo a classe do jogador
    venc.close();

    vida=5; //quantidade de erros que o jogador pode errar

    ti=time(0); //tempo inicial = 0
}

string Jogo::getLetras()
{
    int c=0;
    for (int i = 0; i < 26; ++i) {
        if (letrasUsadas[i]==NULL)
            c++;
    }
    char a[c];
    int p=0;
    for (int i = 0; i < 26; ++i) {
        if (letrasUsadas[i]!=NULL)
        {
            a[p]=letrasUsadas[i];
            p++;
        }
    }
    a[p]='\0';
    string h=a;
    return h;
}

bool Jogo::verificaLetra(char k)
{
    int i,j;
    for (i = 0; i < 26 and letrasUsadas[i]!=k; ++i);
    if (i>=26)
    {//letra nao foi usada
        for (j=0;j<26;j++)
        {
            if (letrasUsadas[j]==NULL)
            {
                letrasUsadas[j]=k;      //letra armazenada
                return true;    //letra nao foi usada
            }
        }
    }
    return false; //letra foi usada
}

