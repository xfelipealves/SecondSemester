#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <jogo.h>
#include <jogador.h>
using namespace std;

int main()
{
    //srand(time(NULL));

    int op;
    char l,ax=0;
    string chute;
    string njogador;

    cout<<"Digite seu nome: ";
    cin>>njogador;
    Jogo f;
    while (f.getVida()!=0)  //ainda tem vida
    {
        system("clear||cls");
        cout<<"Jogador com rank maximo: "<<f.getRN()<<endl;
        cout<<"Tempo recorde: "<<f.getTJ()<<endl;
        cout<<endl<<"Sua vida: "<<f.getVida()<<endl;
        cout<<endl<<f.getPR()<<endl;
        cout<<endl<<"Op: ";
        cout<<endl<<"1 - letra";
        cout<<endl<<"2 - chute";
        cout<<endl<<"3 - novo jogo";
        cout<<endl<<"0 - desistir"<<endl;
        if (ax==-2)
        {
            cout<<"LETRA JA FOI USADA!!"<<endl;
        }
        if (ax!=0)
        {
            cout<<endl<<"Letras usadas: "<<f.getLetras()<<endl;
        }
        cin>>op;
        if (op==1)
        {
            cin>>l;
            ax=f.verificar(l);
            if (ax==1)//venceu
            {
                cout<<"PARABENS VC GANHOU!!"<<endl;
                break;
            }
            else {
                if(ax==-1)//perdeu
                {
                    cout<<"SUA VIDA ACABOU!!"<<endl;
                    break;
                }
            }
        }
        else {
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
                    break;
                }
            }
            else {
                if (op==3)
                {
                    f.novojogo();
                }
                else {
                    if (op==0)
                    {
                        while (f.getVida()!=0)
                            f.perderVida();
                        break;
                    }
                }
            }
        }
    }
    if (f.getVida()==0 or op==0)
    {
        cout<<"A palavra era: "<<f.getP()<<endl;
    }

    if (f.getVida()!=0 and f.getTp()<f.getTJ())
    {
        ofstream win("vencedor.txt");
        win<<njogador<<endl;
        win<<f.getTp();
        cout<<endl<<"NOVO RECORDE!"<<endl;
        win.close();
    }
        cout<<"Tempo de partida: "<<f.getTp()<<endl<<endl;
    return 0;
}

