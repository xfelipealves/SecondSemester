#include <iostream>
using namespace std;

/*   2. Fa�a uma fun��o em C++ que receba como par�metro a refer�ncia de uma string (ou ponteiro
de um vetor de char) e, em seguida, altere todos os casos dos caracteres: letras min�sculas s�o
convertidas em mai�sculas e letras mai�sculas s�o convertidas em min�sculas. Utilize nota��o de
ponteiros para iterar sobre os caracteres digitados. Fa�a um programa que chame essa fun��o e
imprima o resultado. N�o usar o tipo string.  */

void alterar (char* a)
{
	for (int i=0; a[i]!='\0'; i++)
	{
		a[i]=a[i]^32;
	}
}

int main()
{
    char a[100];
    cin>>a;
    alterar(a);
    cout<<a;
    
	return 0;
}
