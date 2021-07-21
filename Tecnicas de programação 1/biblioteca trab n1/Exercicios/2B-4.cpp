#include <iostream>
using namespace std;

string* func (char* s, char a, int* b)
{
	int i=0;
	int cont=0;
	for (; s[i]!='\0'; i++)
	{
		if (s[i]==a)
		{
			cont++;
		}
	}
	//cont vai indicar quantos caracteres tem, logo ele vai determinar quantas strings serao alocadas
	string* ret=new string[cont+1];
	char ind[cont+1][i];
	int k=0;
	int h=0;
	int letra=0;
	for (; s[k]!='\0'; k++)
	{
		if (s[k]!=a)
		{
			ind[h][letra]=s[k];
			letra++; //passar pra proxima letra da string
			if (s[k+1]==a or s[k+1]=='\0')
			{
				ind[h][letra]='\0';
			}
		}
		else
		{
			h++;   //passar pra proxima string
			letra=0;
		}
	}
	*b=cont+1;   //alterando o valor por referencia
	int t=0;
	int y=0;
	for (; t<cont+1; t++)
	{
		ret[t]=ind[t];
	}
	return ret;
}
int main()
{
	char s[100];
	cin>>s;
	char a;
	cin>>a;
	int b=0;
	string* f;
	f=func(s,a,&b);
	for (int i=0; i<b; i++)
	{
		cout<<"''"<<f[i]<<"''"<< ", ";
	}
	cout<<endl<<b<<endl;
	
	return 0;
}
