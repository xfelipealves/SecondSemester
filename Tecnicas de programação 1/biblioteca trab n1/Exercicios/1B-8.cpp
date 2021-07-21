#include <iostream>
using namespace std;

/*
8. Fazer uma função que calcula e retorna o iésimo termo da série de Fibonacci. Fazer um programa
para testá-la. A saber, a série de Fibonacci é uma série onde o primeiro elemento vale 0, o segundo
vale 1 e, a partir do terceiro, o valor é termo é calculado pela soma dos dois termos imediatamente
anteriores. Assim, os primeiros termos são: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ... Considere que o
primeiro valor válido para i é 0.
*/

int fibo(int b)
{
	int f[44];
	f[0]=0;
	f[1]=1;
	for (int i=2;i<45;i++)
	{
		f[i]=f[i-1]+f[i-2];
	}

	return f[b];
}

int main() 
{
	int a;
	cin>>a;
	cout<<fibo(a);

	return 0;
}
