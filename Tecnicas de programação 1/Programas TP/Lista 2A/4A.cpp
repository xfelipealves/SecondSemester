#include <iostream>
using namespace std;

int	compararstring (char* a, char* b, int a1, int b1)
{
	int i=0;
	
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
	char a[50],b[50];
	cin>>a>>b;
	
	int a1=0;
	for (;a1<50 and a[a1]!='\0'; a1++); //calcular tamanho de a
	
	int b1=0;
	for (;b1<50 and b[b1]!='\0'; b1++); //calcular tamanho de b
	
	cout<<compararstring(a,b,a1,b1);
	
	return 0;
}
