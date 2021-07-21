#include <iostream>
using namespace std;
void func2 (int* v, int x)
{
	for (int i=0; i<x; i++)
	{
		cin>>v[i];
	}
}
int main()
{
	int x;
	cin>>x;
	int v[x];
	func2(v,x);
	return 0;
}
