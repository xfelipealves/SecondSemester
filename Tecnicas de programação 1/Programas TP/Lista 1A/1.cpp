#include <iostream>
using namespace std;

void linha(int x, char y)
{
	int i;
	for (i=0;i<x;i++)
	{
		cout<<y;
	}
	cout<<endl;
}

int main()
{
	linha(25,'*');
	cout<<"CMP 1048"<<endl;
	linha(25,'*');
	cout<<"Tecnicas de Programacao"<<endl;
	linha(25,'*');
	
	return 0;
}
