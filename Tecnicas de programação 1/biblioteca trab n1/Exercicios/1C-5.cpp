#include <iostream>
using namespace std;

/*
5. Construa uma fun��o chamada to_lower_case que receba uma string (pode ser um vetor de char
ou um objeto std::string). A fun��o dever� retornar uma outra string cujo conte�do seja o
mesmo da string original, mas com todas as letras min�sculas. Considere que haver�o apenas
caracteres ASCII e n�o haver�o letras com marca��es especiais, como acentua��o, trema, cedilha,
etc. Note que os caracteres al�m das letras n�o devem sofrer altera��o.
*/

char* to_lower_case (char* m)
{
	int b=0;
	for (;m[b]!='\0';b++);
	
	int i=0,a=32;
	for (;i<b;i++)
	{
		if (m[i]>='A' and m[i]<='Z')
		{
			m[i]=m[i]^a;
		}
	}
	return m;
}
int main()
{
	char n[200];
	cin.getline(n,sizeof n);
	
	cout<<to_lower_case(n);
	
	return 0;
}
