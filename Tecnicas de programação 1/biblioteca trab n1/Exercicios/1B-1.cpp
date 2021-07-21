#include <iostream>
using namespace std;

/*
1. Escreva um programa para solicitar ao usuário o raio r de um círculo, e calcular a área A do círculo
usando uma função, e exibir o resultado. Utilize a seguinte fórmula para determinar o volume:

A = pR2
*/

double area(double x)
{
	x=x*x*3.14;
	return x;
}

int main()
{
	double r;
	
	cout<<"Insira o valor do raio =";
	cin>>r;
	cout<<area(r);
	
	return 0;
}
