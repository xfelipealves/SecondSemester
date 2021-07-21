#include <iostream>
using namespace std;

double media(double x,double y,double z)
{
	cout<<(x+y+z)/3;
}

int main()
{
	double n1,n2,n3;
	
	cout<<"Insira o valor da primeira nota = ";
	cin>>n1;
	cout<<"Insira o valor da segunda nota = ";
	cin>>n2;
	cout<<"Insira o valor da terceira nota = ";
	cin>>n3;
	media(n1,n2,n3);
	
	return 0;
}
