#include <iostream>
using namespace std;

/*   2. Faça uma função em C++ que receba como parâmetro a referência de uma string (ou ponteiro
de um vetor de char) e, em seguida, altere todos os casos dos caracteres: letras minúsculas são
convertidas em maiúsculas e letras maiúsculas são convertidas em minúsculas. Utilize notação de
ponteiros para iterar sobre os caracteres digitados. Faça um programa que chame essa função e
imprima o resultado. Não usar o tipo string.  */

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
