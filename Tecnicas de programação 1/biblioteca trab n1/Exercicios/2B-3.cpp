#include <iostream>
using namespace std;

/*   3. Fa�a uma fun��o em C++ que receba como par�metro uma string (pode ser vetor de char ou do
tipo string) e crie uma nova string c�pia da string original, retirando os caracteres em branco do
in�cio e do fim. Retorne por meio da instru��o return a nova string e. Fa�a um programa em C++
que teste a fun��o.  */


char* racismobranco(char* a)
{
	char* b=new char[200];
	int i=0,j,count=0;
	while (a[i]==' ') i++;
	for (j=i; a[j]!='\0'; j++);
	j--;
	while (a[j]==' ') j--;
	//i na posi��o do come�o, e j na posi��o final!!!!
	for (int k=i; k<=j; k++)
	{
		b[count]=a[k];
		count++;
	}
	b[count]='\0';
	return b;
}

int main()
{
    char a[200];
    char* b;
    cin.getline(a, sizeof a);
    
	b=racismobranco(a);
	cout<<"|"<<b<<"|\n";
    
	return 0;
}
