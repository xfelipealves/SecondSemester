#include <iostream>
using namespace std;

int fibo(int b)
{
	int f[44];
	f[0]=0;
	f[1]=1;
	for (int i=2;i<45;i++)
	{
		f[i]=f[i-1]+f[i-2];
	}

	return f[b];
}

int main() 
{
	int a;
	cin>>a;
	cout<<fibo(a);

	return 0;
}
