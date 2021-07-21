#include <iostream>
using namespace std;
void troca (int*a, int*b)
{
	int h;
	int *j=&h;
	*j=*a;
	*a=*b+1;
	*b=*j+1;

}

int main()
{
	int a=10;
	int b=8;
	
	troca(&a,&b);
	
	cout<<a<<endl;
	cout<<b<<endl;
	
	return 0;
}
