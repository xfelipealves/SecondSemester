#include <iostream>
using namespace std;

/*
9. Faça uma função que verifique se um número é ou não regular e retorne 1 caso positivo, ou 0 caso
negativo. Dica: um número é dito regular se sua decomposição em fatores primos apresenta apenas
potências de 2, 3 e 5.
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
