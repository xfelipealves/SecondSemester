#include <iostream>
using namespace std;

/*5. Fa�a uma fun��o em C++ que receba como par�metros duas strings (pode ser vetor de char ou
do tipo string) distintas. A fun��o dever� procurar na primeira string, a primeira ocorr�ncia da
segunda string e retornar o �ndice do primeiro caractere dessa ocorr�ncia na primeira string. Veja
um exemplo.
String 1: "O rato roeu a roupa do rei de roma"
String 2: "oeu"
Retorno da fun��o: 8
Fa�a um programa em C++ que teste a fun��o. */

int pao_com_mortadela123(string a, string b)
{
	int i=0,j=0;
	int tamanho=b.length();
	int gliter;
	for (; a[i]!='\0'; i++)
	{
		if (a[i]==b[j])
		{
			gliter=j;
			for (; gliter<tamanho and a[i+gliter] == b[gliter]; gliter++);
			if (gliter>=tamanho)
			return i;
		}
	}
	return -1;
}

int main()
{
	string a,b;
	getline(cin,a);
	getline(cin,b);
	
	int retornobrabo=pao_com_mortadela123(a,b);
	cout<<retornobrabo;
	//facil demais
	return 0;
}
