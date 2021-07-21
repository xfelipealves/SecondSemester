#include <iostream>
using namespace std;

void linha2(int x, char y)
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
	linha2(23,'*');
	cout<<"CMP 1048"<<endl;
	linha2(23,'@');
	cout<<"Tecnicas de Programacao"<<endl;
	linha2(23,'+');
	
	return 0;
}
