#include <iostream>
using namespace std;

void desenha_retangulo_solido (int a, int b, char m)
{
	for (int i=0;i<a;i++)
	{
		for (int j=0;j<b;j++)
		{
			cout<<m;
		}
		cout<<endl;
	}
}

int main()
{
	desenha_retangulo_solido(5,20,'M');
	
	return 0;
}
