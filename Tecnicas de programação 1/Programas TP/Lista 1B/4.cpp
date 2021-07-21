#include <iostream>
using namespace std;

double mes(double x)
{
	if (x==1)
	{
		cout<<"Janeiro";
	}
	else
	{
		if (x==2)
		{
			cout<<"Fevereiro";
		}
		else
		{
			if (x==3)
			{
				cout<<"Marco";
			}
			else
			{
				if (x==4)
				{
					cout<<"Abril";
				}
				else
				{
					if (x==5)
					{
						cout<<"Maio";
					}
					else
					{
						if (x==6)
						{
							cout<<"Junho";
						}
						else
						{
							cout<<"Valor invalido";
						}
					}
				}
			}
		}
	}
}

int main()
{
	double r;
	
	cout<<"Insira o valor do mes =";
	cin>>r;
	mes(r);
	
	return 0;
}
