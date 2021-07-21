#include <iostream>
using namespace std;

/*
5. Construa uma função chamada to_lower_case que receba uma string (pode ser um vetor de char
ou um objeto std::string). A função deverá retornar uma outra string cujo conteúdo seja o
mesmo da string original, mas com todas as letras minúsculas. Considere que haverão apenas
caracteres ASCII e não haverão letras com marcações especiais, como acentuação, trema, cedilha,
etc. Note que os caracteres além das letras não devem sofrer alteração.
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
