#include <iostream>
using namespace std;
void func5 (int* p, int* menor, int* maior)
{
	int i=0;
	for (;p[i]!='\0'; i++)
	{
		if(p[i]<*menor)
		{
			*menor=p[i];
		}
		if(p[i]>*maior)
		{
			*maior=p[i];
		}
	}
}
int main()
{
	int x;
	cin>>x;
	int* p = new int[x];
	for (int i=0; i<x;i++)
	{
		cin>>p[i];
	}
	int menor=9999999,maior=0;
	func5(p,&menor,&maior);
	cout<<menor<<endl<<maior<<endl;
	delete[] p;
}
