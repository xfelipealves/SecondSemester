#include <iostream>
using namespace std;

/*5. Faça uma função em C++ que receba como parâmetros duas strings (pode ser vetor de char ou
do tipo string) distintas. A função deverá procurar na primeira string, a primeira ocorrência da
segunda string e retornar o índice do primeiro caractere dessa ocorrência na primeira string. Veja
um exemplo.
String 1: "O rato roeu a roupa do rei de roma"
String 2: "oeu"
Retorno da função: 8
Faça um programa em C++ que teste a função. */

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
