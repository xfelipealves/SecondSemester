#include <iostream>
using namespace std;

void desenha_retangulo(int a, int b, char m)
{
	for (int i=0;i<a;i++)
	{
		cout<<m;
		for (int j=1;j<b;j++)
		{
			if (i==0 or i==a-1 or j==b-1)
			{
				cout<<m;
			}
			else
			{
				cout<<"-";
			}
		}
		cout<<endl;
	}
}

int main()
{
	desenha_retangulo (5,20,'M');
	
	return 0;
}
