#include <iostream>
using namespace std;

/* 1. Fa�a uma fun��o em C++ que receba como par�metros uma string (pode ser vetor de char ou
do tipo string) que contenha apenas caracteres num�ricos (�0� � �9�). A fun��o dever� converter
essa string para um n�mero int referente ao n�mero em forma de string. Por fim, a fun��o dever�
retornar esse n�mero. Fa�a um programa em C++ que teste a fun��o*/

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
