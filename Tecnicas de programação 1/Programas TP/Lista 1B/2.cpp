#include <iostream>
using namespace std;

double volume(double x)
{
	cout<<4*3.14/3*x*x*x;
}

int main()
{
	double r;
	
	cout<<"Insira o valor do raio =";
	cin>>r;
	volume(r);
	
	return 0;
}
