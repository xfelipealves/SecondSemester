#include <iostream>
using namespace std;
int reg(int x)
{
	int resto;
	resto=x;
	while (resto%2==0)
	{
		resto=resto/2;
	}
	while (resto%3==0)
	{
		resto=resto/3;
	}
	while (resto%5==0)
	{
		resto=resto/5;
	}
	if (resto!=1)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}

int main()
{
	int n;
	cout<<"Digite um numero = ";
	cin>>n;
	cout<<reg(n);
	
	return 0;
}
