#include <iostream>
using namespace std;

/*
9. Fa�a uma fun��o que verifique se um n�mero � ou n�o regular e retorne 1 caso positivo, ou 0 caso
negativo. Dica: um n�mero � dito regular se sua decomposi��o em fatores primos apresenta apenas
pot�ncias de 2, 3 e 5.
*/

int reg(int x)
{
	int resto;
	resto=x;
	while (resto%2==0)
	{
		resto=resto/2;
	}
	while (resto%3==0)
	{
		resto=resto/3;
	}
	while (resto%5==0)
	{
		resto=resto/5;
	}
	if (resto!=1)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}

int main()
{
	int n;
	cout<<"Digite um numero = ";
	cin>>n;
	cout<<reg(n);
	
	return 0;
}
