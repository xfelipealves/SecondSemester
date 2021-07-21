#include <iostream>
using namespace std;
void func3 (int* v, int x)
{
	for (int i=0; i<x; i++)
	{
		cout<<v[i]<<endl;
	}
}
int main()
{
	int x;
	cin>>x;
	int v[x];
	for (int i=0; i<x; i++)
	{
		cin>>v[i];
	}
	func3(v,x);
	return 0;
}

