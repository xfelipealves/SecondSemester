#include <iostream>
using namespace std;

void juntarstring (char* a, char* b, int a1, int b1, char* c)
{
	int i=0;
	for (;i<a1;i++)  //preencher com a primeira stirng
	{
		c[i]=a[i];
	}
	int j=0;
	c[i]=' ';   //colocar o espaço pra diferenciar as strings
	i++;
	for (;j<b1 and b[j]!='\0'; j++,i++)   //preencher com a segunda string
	{
		c[i]=b[j];
	}
	c[i]='\0';
}

int main()
{
	char a[50],b[50];
	cin>>a>>b;
	
	int a1=0;
	for (;a1<50 and a[a1]!='\0'; a1++); //calcular tamanho de a

	int b1=0;
	for (;b1<50 and b[b1]!='\0'; b1++); //calcular tamanho de b
	
	char c[a1+b1];
	juntarstring(a,b,a1,b1,c);
	
	cout<<c<<endl;
	
	return 0;
}
