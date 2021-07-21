#include <iostream>
using namespace std;
int* func1 (int x)
{
	int* bola=new int [x];
	for (int i=0; i<x;i++)
	{
		bola[i]=0;
	}
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
