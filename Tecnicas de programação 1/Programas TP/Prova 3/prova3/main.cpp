#include "jogodavelhapro.h"
#include <iostream>
using namespace std;
int main()
{
    JogoDaVelhaPro hehe;
    char ganha=1;
    bool gol;
    int l,c,func;
    while (ganha==1)
    {
        for (int i=0; i<3; i++)
        {
            for (int j=0; j<3; j++)
            {
                cout<<hehe.get_celula(i,j)<<" ";
            }
            cout<<endl;
        }
        cout<<endl<<"Linha e coluna:";
        cin>>l>>c;
        cout<<endl<<"1 para MARCAR X, 2 PARA MARCAR O"<<endl;
        cin>>func;
        if (func==1)
        {
            gol=hehe.marcar_xis(l,c);
            while (gol!=true)
            {
                cout<<"Posicao invalida, digite novamente a linha e coluna";
                cin>>l>>c;
                gol=hehe.marcar_xis(l,c);
            }
        }
        if (func==2)
        {
            gol=hehe.marcar_circulo(l,c);
            while (gol!=true)
            {
                cout<<"Posicao invalida, digite novamente a linha e coluna";
                cin>>l>>c;
                gol=hehe.marcar_circulo(l,c);
            }
        }
        ganha=hehe.verificar_status();
    }
    if (ganha==0)
    {
        cout<<endl<<"DEU VELHA!!!"<<endl;
    }
    else {
        cout<<endl<<ganha<<" GANHOU!!!!!!"<<endl;
    }

    return 0;
}
