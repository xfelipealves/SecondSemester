#include <iostream>
using namespace std;
void caixa_com_texto_centralizado (string s1, int n1, char c1)
{
	int i=0,j=1;
	int z=s1.length();
	
	for (;i<3;i++)
	{
		cout<<c1;
		for (;j<30;j++)
		{
			if (i==0 or i==2 or j==29)
			{
				cout<<c1;
			}
			else
			{
				cout<<" ";
			}
		}
		cout<<endl;
	}
	
}

int main()
{
	string s;
	int n=30;
	char c='+';
	cin>>s;
	caixa_com_texto_centralizado(s,n,c);
	
	return 0;
}
