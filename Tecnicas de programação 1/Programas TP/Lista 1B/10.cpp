#include <iostream>
using namespace std;

int fatorial(int x)
{
	int i,a=1; 
	
	for (i=x;i>0;i--)
	{
		a=a*i;
	}
	return a;
	
}

int comb(int n1, int p1)
{
	int c;
	c=fatorial(n1)/(fatorial(p1)*fatorial(n1-p1));
	return c;
}

int main() 
{
	int n,p;
	cout<<"Digite o valor de combinacoes = ";
	cin>>n;
	cout<<"Digite o valor de elementos = ";
	cin>>p;
	cout<<comb(n,p);
	
	return 0;
}
