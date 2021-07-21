#include <iostream>
using namespace std;

double area(double x)
{
	cout<<x*x*3.14;
}

int main()
{
	double r;
	
	cout<<"Insira o valor do raio =";
	cin>>r;
	area(r);
	
	return 0;
}
