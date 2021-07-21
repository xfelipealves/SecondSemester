#include <iostream>
using namespace std;

/*

5. Escreva uma função desenha_retangulo_preenchido que exibe um retângulo composto do mesmo
caractere totalmente preenchido por um outro caractere. A função deverá ser capaz de desenhar
retângulos de tamanho parametrizável, de modo que os parâmetros deverão incluir quantidade de
linhas, quantidade de colunas, caractere desejado para o contorno e o caractere desejado para o
preenchimento. Por exemplo, se a quantidade de linhas for 5, quantidade de colunas for 15, o
caractere de contorno for ‘#’ e o caractere de preenchimento for ‘-’, a função deverá exibir:
# ##############
# - - - - - -- - - - - - -#
# - - - - - -- - - - - - -#
# - - - - - -- - - - - - -#
# ############## 

*/

void desenha_retangulo(int a, int b, char m)
{
	for (int i=0;i<a;i++)
	{
		cout<<m;
		for (int j=1;j<b;j++)
		{
			if (i==0 or i==a-1 or j==b-1)
			{
				cout<<m;
			}
			else
			{
				cout<<"-";
			}
		}
		cout<<endl;
	}
}

int main()
{
	desenha_retangulo (5,20,'#');
	
	return 0;
}
