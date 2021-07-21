#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <jogo.h>
#include <jogador.h>
using namespace std;

int main()
{
    srand(time(NULL));

    string pl[50];
    int i=0;
    ifstream arq1("palavras-windows.txt");
    while (arq1.eof()==0)
    {
        getline(arq1,pl[i]);
        i++;
    }
    arq1.close();

    ifstream venc("vencedor.txt");
    string nzin;
    int tempo;
    getline(venc,nzin);
    venc>>tempo;
    jogador jog(nzin,tempo);
    venc.close();

    int j=rand()%49 + 0;
    Jogo f(pl[j]);

    int op;
    char l;
    string chute;
    string njogador;

    long long tempoInicio=time(0);

    cin>>njogador;
    while (true)
    {
        cout<<endl<<endl;
        cout<<f.getPR()<<endl;
        cout<<endl<<"Op: ";
        cout<<endl<<"1 - letra";
        cout<<endl<<"2 - chute";
        cout<<endl<<"0 - desistir"<<endl;
        cin>>op;
        if (op==1)
        {
            cin>>l;
            if (f.verificar(l)==1)
            {
                cout<<"PARABENS VC GANHOU!!"<<endl;
                break;
            }
        }
        if (op==2)
        {
            cin>>chute;
            if (f.chute(chute))
            {
                cout<<"PARABENS VC GANHOU!!"<<endl;
                break;
            }
            else
            {
                cout<<"QUE PENA VC NAO GANHOU!!"<<endl;
                cout<<"A palavra era: "<<f.getP()<<endl;
                break;
            }
        }
        if (op==0)
        {
            cout<<"A palavra era: "<<f.getP()<<endl;
            break;
        }
    }

    long long tempoFim = time(0);
    long long tempoPartida = tempoFim-tempoInicio;

    if (tempoPartida<jog.getTempo())
    {
        ofstream win("vencedor.txt");
        win<<njogador<<endl;
        win<<tempoPartida;
        cout<<endl<<"NOVO RECORDE!"<<endl;
        win.close();
    }

    return 0;
}
