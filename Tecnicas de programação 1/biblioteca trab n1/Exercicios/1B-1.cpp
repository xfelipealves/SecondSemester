#include <iostream>
using namespace std;

/*
1. Escreva um programa para solicitar ao usu�rio o raio r de um c�rculo, e calcular a �rea A do c�rculo
usando uma fun��o, e exibir o resultado. Utilize a seguinte f�rmula para determinar o volume:

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
