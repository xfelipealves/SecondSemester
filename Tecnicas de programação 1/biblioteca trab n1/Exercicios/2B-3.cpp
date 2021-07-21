#include <iostream>
using namespace std;

/*   3. Faça uma função em C++ que receba como parâmetro uma string (pode ser vetor de char ou do
tipo string) e crie uma nova string cópia da string original, retirando os caracteres em branco do
início e do fim. Retorne por meio da instrução return a nova string e. Faça um programa em C++
que teste a função.  */


char* racismobranco(char* a)
{
	char* b=new char[200];
	int i=0,j,count=0;
	while (a[i]==' ') i++;
	for (j=i; a[j]!='\0'; j++);
	j--;
	while (a[j]==' ') j--;
	//i na posição do começo, e j na posição final!!!!
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
