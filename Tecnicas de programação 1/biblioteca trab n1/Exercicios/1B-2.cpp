#include <iostream>
using namespace std;

/*
2. Escreva um programa para solicitar ao usuário o raio r de uma esfera, e calcular o volume V da esfera
usando uma função, e exibir o resultado. Utilize a seguinte fórmula para determinar o volume:

V =
4p
3
r
3
*/

double volume(double x)
{
	x=4*3.14/3*x*x*x;
	return x;
}

int main()
{
	double r;
	
	cout<<"Insira o valor do raio =";
	cin>>r;
	cout<<volume(r);
	
	return 0;
}
