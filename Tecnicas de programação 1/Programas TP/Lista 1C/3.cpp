#include <iostream>
#include <queue>
using namespace std;
bool palindromo(string x)
{	


	queue <char> s;
	int k=x.length(); //tamanho da string k
	for (int i=0;i<k;i++)
	{
		s.push(x[i]);//colocando todos dentro da fila
	}
	int i,j;
    	for (i=0, j=k-1 ; s.front()!=x[j] and i<=j ; i++, j--, s.pop());
    	if (i>j) 
		return true;
    	return 0;

}
int main()
{
    string a;
    cout<<"Digite uma frase = ";
    getline(cin,a);
    
    cout<<palindromo(a);
    return 0;
}
