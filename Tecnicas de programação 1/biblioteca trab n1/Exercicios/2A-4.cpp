#include <iostream>
using namespace std;

/*
4. Fa�a uma fun��o em C++ que receba como par�metros dois ponteiros para duas strings (vetor de
char) distintas. A fun��o dever� realizar a compara��o das duas strings e retornar um dos seguintes
valores:
� 0 caso as duas strings sejam iguais;
� -1 caso a primeira string seja lexicograficamente anterior � segunda;
� 1 caso a primeira string seja lexicograficamente posterior � segunda.
N�o � necess�rio verificar se as letras s�o mai�sculas ou min�sculas.
Caso uma das strings seja menor que a outra e, todos os seus caracteres forem iguais aos caracteres do
in�cio da string maior, ent�o a string de tamanho menor dever� ser considerada anterior � maior. Por
exemplo, as strings "aba"e "abacate"s�o de tamanho diferente. Como a string maior come�a com
todos os caracteres da string menor, ent�o a string "aba"deve ser considerada lexicograficamente
anterior a "abacate". Evidentemente, a string "abre"� lexicograficamente posterior a "abacate",
uma vez que ambas as string come�am com "ab", mas o terceiro caractere de "abre"� "r", que �
alfabeticamente posterior ao caractere "a", que � o terceiro caractere de "abacate".
Fa�a um programa em C++ que teste a fun��o.
*/

int	compararstring (char* a, char* b)
{
	int i=0;
	
	int a1=0;
	for (;a1<50 and a[a1]!='\0'; a1++); //calcular tamanho de a
	
	int b1=0;
	for (;b1<50 and b[b1]!='\0'; b1++); //calcular tamanho de b
	
	for (; a[i]==b[i] and i<a1 and i<b1; i++);
	
	if (i>=a1 and i>=b1)  //se elas forem iguais
	{
		return 0;
	}
	
	if (i<a1 and i<b1)
	{//sao diferentes
		int k= (char) a[i];
		int kk= (char) b[i];
		if (k>kk)
		{//a>b
			return 1;
		}
		else
		{
			if (kk>k)
			{//b>a
				return -1;
			}
		}
	}
	
	if (i<a1 and i>=b1)
	{//a maior que b
		return 1;
	}
	else
	{
		if (i>=a1 and i<b1)
		{//b maior que a
			return -1;
		}
	}
	
}

int main()
{
	char a[200],b[200];
	cin.getline(a,sizeof a);
	cin.getline(b,sizeof b);
	
	cout<<compararstring(a,b);
	
	return 0;
}
