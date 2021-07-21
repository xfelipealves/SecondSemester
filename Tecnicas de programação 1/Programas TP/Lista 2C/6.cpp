#include <iostream>
using namespace std;
int* uniao(int* p1, int* p2, int p10, int p20, int* tm)
{
	int* res=new int[p10+p20];
	
	int i=0;
	int j=0;
	int k=0;
	int l=0;
	int total=p10+p20;
	for (; i<p10; i++)   //leu o primeiro vetor
	{
		res[i]=p1[i];
	}
	for (; j<p20; j++)	//leu o segundo vetor
	{
		res[i]=p2[j];
		i++;
	}
	int ind;
	for (; k<total; k++)
	{
			for (l=k+1; l<total; l++)
			{
				if (res[k]==res[l])
				{
					res[l]=0;
				}
			}
			if(res[k]==0)
			ind=1;
	}
	res[k]='\0';
	
	*tm=total;
	return res;
}

int main()
{
	int x,y;
	
	cin>>x;
	int* p1=new int[x];
	for (int i=0; i<x;i++)
	{
		cin>>p1[i];
	}
	
	cin>>y;
	int* p2=new int[y];
	for (int i=0; i<y;i++)
	{
		cin>>p2[i];
	}
	int tm;
	int* res=uniao(p1, p2, x, y, &tm);
	cout<<tm<<endl;
	
	cout<<res;
	
	return 0;
}
