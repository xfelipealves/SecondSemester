#include <iostream>
using namespace std;

void fatorial(int x)
{
	int i,a=1; 
	
	for (i=x;i>0;i--)
	{
		a=a*i;
	}
	cout<<a;
	
}
int main() 
{
	int n;
	cout<<"Digite um numero inteiro qualquer = ";
	cin>>n;
	fatorial(n);
	
	return 0;
}
