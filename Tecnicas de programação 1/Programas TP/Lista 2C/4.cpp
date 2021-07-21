#include <iostream>
using namespace std;
void func3 (int* v, int x)
{
	for (int i=0; i<x; i++)
	{
		cout<<v[i]<<endl;
	}
}

void func2 (int* v, int x)
{
	for (int i=0; i<x; i++)
	{
		cin>>v[i];
	}
	func3(v,x);
}

int* func1 (int x)
{
	int* bola=new int [x];
	for (int i=0; i<x;i++)
	{
		bola[i]=0;
	}
	func2(bola,x);
	return bola;
}

int main()
{
	int x;
	cin>>x;
	int* pontero=func1(x);
	delete[] pontero;
	
	return 0;
}
