#include <iostream>
using namespace std;

void perf (int x)
{
	int v[100], cont=0, i=2, s=1;
	for (;i<x;i++) //salvar os multiplos no vetor V
	{
		if (x%i==0)
		{
			v[cont]=i;
			cont++;
		}	
	}
	
	for (i=0;i<cont;i++) //somar os multiplos
	{
		s=s+v[i];
	}
	if (s==x) //verificar se é perfeito
	{//é perfeito!
		cout<<"Eh perfeito"<<endl;
		cout<<x<<" = 1";
		for (i=0;i<cont;i++)
		{
			cout<<" + "<<v[i];
		}
		cout<<endl;
	}
	else
	{//nao é perfeito!
		cout<<"Nao eh perfeito"<<endl;
	}
}

int main()
{
	int n;
	cin>>n;
	perf(n);
	return 0;
}
