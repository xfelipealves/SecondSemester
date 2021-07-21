#include <iostream>
using namespace std;

/* 1. Faça uma função em C++ que receba como parâmetros uma string (pode ser vetor de char ou
do tipo string) que contenha apenas caracteres numéricos (‘0’ à ‘9’). A função deverá converter
essa string para um número int referente ao número em forma de string. Por fim, a função deverá
retornar esse número. Faça um programa em C++ que teste a função*/

void inteirizar(int* inteiro,string a)
{
	*inteiro=a[0]-48;
	
	for (int i=1; a[i]!='\0'; i++)
	{
		*inteiro=*inteiro*10;
		*inteiro=*inteiro+(a[i]-48);
	}
	
}

int main()
{
    string a;
    int inteiro;
    cin>>a;
    
    inteirizar(&inteiro,a);
    
	cout<<inteiro;
	
	return 0;
}
