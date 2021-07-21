#include <iostream>
#include <math.h>
using namespace std;

double log_(double x, double y)
{
	cout<<log(x)/log(y);
}

int main()
{
	double a,b;
	cout<<"Digite o valor do logaritmando = ";
	cin>>a;
	cout<<"Digite o valor da base = ";
	cin>>b;
	log_(a,b);
	
	return 0;
}
