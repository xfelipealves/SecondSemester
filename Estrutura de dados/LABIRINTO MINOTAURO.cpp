#include <iostream>
using namespace std;

bool find_corno (char* labirinto, int m, int n, int i, int j, int fl, int fc, int track)
{
	if (i==fl and j==fc)
	{
		return true;
	}
    labirinto[n*i+j]='*';
    //pra direita 1
    if (j!=(n-1))
    {
        if (labirinto[n*i+j+1]==' ')
        {
            find_corno(labirinto,m,n,i,j+1,fl,fc,1);
        }
    }
    //pra baixo 2
    if (i!=(m-1))
    {
        if (labirinto[n*(i+1)+j]==' ')
        {
            find_corno(labirinto,m,n,i+1,j,fl,fc,2);
        }
    }
    //pra esquerda** 3
    if (j!=0)
    {
        if (labirinto[n*i+j-1]==' ')
        {
            find_corno(labirinto,m,n,i,j-1,fl,fc,3);
        }
    }
    //pra cima** 4
    if (i!=0)
    {
        if (labirinto[n*(i-1)+j]==' ')
        {
            find_corno(labirinto,m,n,i-1,j,fl,fc,4);
        }
    }
    
    //VOLTANDO
    if (track==1)
    {//direta : esqueda
        labirinto[n*i+j]='n';
        find_corno(labirinto,m,n,i,j-1,fl,fc,0);
    }
    if (track==2)
    {//baixo : cima
        labirinto[n*i+j]='n';
        find_corno(labirinto,m,n,i-1,j,fl,fc,0);
    }
    if (track==3)
    {//esquerda : direita
        labirinto[n*i+j]='n';
        find_corno(labirinto,m,n,i,j+1,fl,fc,0);
    }
    if (track==4)
    {//cima : baixo
        labirinto[n*i+j]='n';
        find_corno(labirinto,m,n,i+1,j,fl,fc,0);
    }
    
    return false;
}

bool verifica(char* labirinto, int m, int n, int il, int ic, int fl, int fc)
{
	find_corno(labirinto,m,n,il,ic,fl,fc,0);
    for (int i=0;i<(m*n);i++)
	{//desmarcar
    	if (labirinto[i]=='n')
        {            
			labirinto[i]=' ';
        }
	}
	if (labirinto[n*fl+fc]=='*')
	       return true;
    return false;
}

int main()
{
	bool pp;
    int q,m,n,il,ic,fl,fc;
    char* labirinto=NULL;
    cin>>q;
    for (int p=0;p<q;p++)
    {
        cin>>m>>n;
        labirinto=new char[m*n];
        for (int i=0;i<m;i++)
        {
            for (int j=0;j<n;j++)
            {
                cin>>labirinto[n*i+j];
            }
        }
        
        cin>>il>>ic>>fl>>fc;
        
        pp=verifica(labirinto,m,n,il,ic,fl,fc);
        if (pp==true)
        {
            for (int i=0;i<m;i++)
            {
                for (int j=0;j<n;j++)
                {
                    cout<<labirinto[n*i+j];
                }
                cout<<endl;
            }
            cout<<endl;
        }
        else
        {
            cout<<"Nao foi possível encontrar o corno"<<endl;
        }
        delete labirinto;
    }
}

