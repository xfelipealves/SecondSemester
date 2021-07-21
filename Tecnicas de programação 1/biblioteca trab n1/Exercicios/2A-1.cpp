#include <iostream>
using namespace std;

/*
1. Faça uma função em C++ que receba a referência de três variáveis inteiras e realize a ordenação
crescente dos parâmetros passados por meio de trocas (ao final da execução da função, o menor
valor deverá estar na variável passada como primeiro parâmetro, o segundo menor na variável do
segundo parâmetro e o maior, na variável do terceiro parâmetro). Faça um programa que chame
essa função e imprima os novos valores das variáveis.
*/

void ordem (int* a,int* b,int* c)
{
	int g;
	int* j=&g;
	//Para A maior que todos
	if (*a>*b and *a>*c and *b>*c)
	{//a>b>c
		*j=*a;
		*a=*c;
		*c=*j;
		//a<b<c
	}
	
	if (*a>*b and *a>*c and *c>*b)
	{//a>c>b
		*j=*a;
		*a=*b;
		*b=*j;
		//b>c>a;
		*j=*c;
		*c=*b;
		*b=*j;
		//a<b<c
	}
	
	//Para B maior que todos
	if (*b>*a and *b>*c and *a>*c)
	{//c<a<b ERRO
		*j=*c;
		*c=*a;
		*a=*j;
		//a<c<b
		*j=*b;
		*b=*c;
		*c=*j;
	}
	
	if (*b>*a and *b>*c and *c>*a)
	{//a<c<b
		*j=*b;
		*b=*c;
		*c=*j;
	}
	
	//Para C maior que todos
	if (*c>*a and *c>*b and *a>*b)
	{//b<a<c
		*j=*a;
		*a=*b;
		*b=*j;
	}
	
}

int main()
{
	int a=1;
	int b=2;
	int c=0;
	ordem(&a,&b,&c);
	
	cout<<a<<endl;
	cout<<b<<endl;
	cout<<c<<endl;
	
	return 0;
}
