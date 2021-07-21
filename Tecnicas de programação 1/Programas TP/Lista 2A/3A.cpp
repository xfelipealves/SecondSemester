#include <iostream>
using namespace std;
int conta(char* b)
{
	int i=0;
	for (;i<50 and b[i]!='\0'; i++);
	
	return i;
	
}

int main()
{
	char a[50];
	cin>>a;
	cout<<conta(a);
	
	return 0;
}
