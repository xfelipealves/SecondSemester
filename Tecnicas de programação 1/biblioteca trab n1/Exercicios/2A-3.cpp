#include <iostream>
using namespace std;

/*
3. Fa�a uma fun��o em C++ que receba como par�metro o ponteiro para uma string (vetor de char),
conte e retorne a quantidade de caracteres da string.
*/

int conta(char* b)
{
	int i=0;
	for (;i<50 and b[i]!='\0'; i++);
	
	return i;
}

int main()
{
	char a[200];
	cin.getline(a,sizeof a);
	cout<<conta(a);
	
	return 0;
}
