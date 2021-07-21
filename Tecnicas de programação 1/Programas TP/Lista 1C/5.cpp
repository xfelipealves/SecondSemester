#include <iostream>
using namespace std;
void to_lower_case (char* m, int b)
{
	int i=0,a=32;
	for (;i<b;i++)
	{
		if (m[i]>='A' and m[i]<='Z')
		{
			m[i]=m[i]^a;
		}
	}
}
int main()
{
	char n[46];
	cin>>n;
	int a=0;
	for (;n[a]!='\0';a++);
	
	to_lower_case(n,a);
	cout<<n<<endl;
	return 0;
}
