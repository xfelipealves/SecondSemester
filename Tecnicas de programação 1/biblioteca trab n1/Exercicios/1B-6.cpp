#include <iostream>
using namespace std;

/*
6. Fazer uma fun��o que calcula e retorna o fatorial de um n�mero inteiro qualquer. Fazer um programa
para test�-la.
*/

int fatorial(int x)
{
	int i,a=1; 
	
	for (i=x;i>0;i--)
	{
		a=a*i;
	}
	return a;
	
}
int main() 
{
	int n;
	cout<<"Digite um numero inteiro qualquer = ";
	cin>>n;
	cout<<fatorial(n);
	
	return 0;
}
