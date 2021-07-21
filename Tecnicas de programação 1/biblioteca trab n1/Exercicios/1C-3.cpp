#include <iostream>
using namespace std;

/*
3. Criar uma função que recebe uma string e verifica se o texto é um palíndromo ou não, retornando
1 para o caso positivo ou 0 para o caso negativo.
*/

bool palin (char* x)
{
	int ct=0, q;
    
    for(q=0;x[q]!='\0';q++) //organizar os espaÃ§os do vetor de string
    {
        if(x[q]!=' ') 
		{
			x[ct]=x[q];
			ct++;
		}
    }
    x[ct]='\0';
    int k=ct;
    
    int j=k-1,i=0;
    
    for (; i<=j and x[i] == x[j]; i++, j--); //verificar se sÃ£o iguais
    if (i>j) return 1;
    
    return 0;
    
}
int main()
{
    char a[200];
    cout<<"Digite uma frase = ";
    cin.getline(a,sizeof a);
    
    cout<<palin(a);
    return 0;
}
