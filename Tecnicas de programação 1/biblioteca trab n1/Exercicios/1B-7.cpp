#include <iostream>
#include <math.h>
using namespace std;

/*
7. Fazer um programa que verifica se um n�mero � primo, usando uma fun��o.
*/

void primo(int x)
{
	double y;
	y=sqrt(x);
	int a=0;
	for (int i=2; i<=y and a!=1; i++)
	{
		if (x%i==0)
		{
			a=1;
		}
	}
	if (a==1)
	{
		cout<<"Nao eh primo"<<endl;
	}
	else
	{
		cout<<"Eh primo"<<endl;
	}
}
int main() 
{
	int n;
	cout<<"Digite um numero inteiro qualquer = ";
	cin>>n;
	primo(n);
	
	return 0;
}
