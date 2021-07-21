#include "sucrilhos.h"

//1******************************************************************************
void func1(int a, int b, char m)   //1A-5
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

//2******************************************************************************
double func2(double x)  //1B-1
{
	cout<<x*x*3.14;
}

//3******************************************************************************
double func3(double x)   //1B-2
{
	cout<<4*3.14/3*x*x*x;
}

//4******************************************************************************
int func4(int x)   //1B-6
{
	int i,a=1; 
	
	for (i=x;i>0;i--)
	{
		a=a*i;
	}
	return a;
}

//5******************************************************************************
void func5(int x)    //1B-7
{
	double y;
	y=sqrt(x);
	int a=0;
	for (int i=2; i<=y and a!=1; i++)
	{
		if (x%i==0)
		{
			a=1;
		}
	}
	if (a==1)
	{
		cout<<"Nao eh primo"<<endl;
	}
	else
	{
		cout<<"Eh primo"<<endl;
	}
}

//6******************************************************************************
int func6(int b)   //1B-8
{
	int f[44];
	f[0]=0;
	f[1]=1;
	for (int i=2;i<45;i++)
	{
		f[i]=f[i-1]+f[i-2];
	}

	return f[b];
}

//7******************************************************************************
int func7(int x)   //1B-9
{
	int resto;
	resto=x;
	while (resto%2==0)
	{
		resto=resto/2;
	}
	while (resto%3==0)
	{
		resto=resto/3;
	}
	while (resto%5==0)
	{
		resto=resto/5;
	}
	if (resto!=1)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}

//8******************************************************************************
int func8(int n1, int p1) //1B-10
{
	int c;
	c=func4(n1)/(func4(p1)*func4(n1-p1));
	return c;
}

//9******************************************************************************
bool func9 (char* x)  //1C-3
{
	int ct=0, q;
    
    for(q=0;x[q]!='\0';q++) //organizar os espaÃ§os do vetor de string
    {
        if(x[q]!=' ') 
		{
			x[ct]=x[q];
			ct++;
		}
    }
    x[ct]='\0';
    int k=ct;
    
    int j=k-1,i=0;
    
    for (; i<=j and x[i] == x[j]; i++, j--); //verificar se sÃ£o iguais
    if (i>j) return 1;
    
    return 0;
    
}

//10******************************************************************************
char* func10 (char* m)   //1C-5
{
	int b=0;
	for (;m[b]!='\0';b++);
	
	int i=0,a=32;
	for (;i<b;i++)
	{
		if (m[i]>='A' and m[i]<='Z')
		{
			m[i]=m[i]^a;
		}
	}
	return m;
}

//11******************************************************************************
char* func11 (char* m)   //1C-6
{
	int b=0;
	for (;m[b]!='\0';b++);
	
	int i=0,a=32;
	for (;i<b;i++)
	{
		if (m[i]>='a' and m[i]<='z')
		{
			m[i]=m[i]^a;
		}
	}
	return m;
}

//12******************************************************************************
void func12 (int n1, char c1)   //1C-7 INCOMPLETA
{
	
}

//13******************************************************************************
void func13 (int* a,int* b,int* c)     //2A-1
{
	int g;
	int* j=&g;
	//Para A maior que todos
	if (*a>*b and *a>*c and *b>*c)
	{//a>b>c
		*j=*a;
		*a=*c;
		*c=*j;
		//a<b<c
	}
	
	if (*a>*b and *a>*c and *c>*b)
	{//a>c>b
		*j=*a;
		*a=*b;
		*b=*j;
		//b>c>a;
		*j=*c;
		*c=*b;
		*b=*j;
		//a<b<c
	}
	
	//Para B maior que todos
	if (*b>*a and *b>*c and *a>*c)
	{//c<a<b ERRO
		*j=*c;
		*c=*a;
		*a=*j;
		//a<c<b
		*j=*b;
		*b=*c;
		*c=*j;
	}
	
	if (*b>*a and *b>*c and *c>*a)
	{//a<c<b
		*j=*b;
		*b=*c;
		*c=*j;
	}
	
	//Para C maior que todos
	if (*c>*a and *c>*b and *a>*b)
	{//b<a<c
		*j=*a;
		*a=*b;
		*b=*j;
	}
	
}

//14******************************************************************************
int func14(char* b)   //2A-3
{
	int i=0;
	for (;i<50 and b[i]!='\0'; i++);
	
	return i;
}

//15******************************************************************************
int	func15 (char* a, char* b)    //2A-4
{
	int i=0;
	
	int a1=0;
	for (;a1<50 and a[a1]!='\0'; a1++); //calcular tamanho de a
	
	int b1=0;
	for (;b1<50 and b[b1]!='\0'; b1++); //calcular tamanho de b
	
	for (; a[i]==b[i] and i<a1 and i<b1; i++);
	
	if (i>=a1 and i>=b1)  //se elas forem iguais
	{
		return 0;
	}
	
	if (i<a1 and i<b1)
	{//sao diferentes
		int k= (char) a[i];
		int kk= (char) b[i];
		if (k>kk)
		{//a>b
			return 1;
		}
		else
		{
			if (kk>k)
			{//b>a
				return -1;
			}
		}
	}
	
	if (i<a1 and i>=b1)
	{//a maior que b
		return 1;
	}
	else
	{
		if (i>=a1 and i<b1)
		{//b maior que a
			return -1;
		}
	}
	
}

//16******************************************************************************
void func16(int* inteiro,char* a)  //2B-1
{
	*inteiro=a[0]-48;
	
	for (int i=1; a[i]!='\0'; i++)
	{
		*inteiro=*inteiro*10;
		*inteiro=*inteiro+(a[i]-48);
	}
	
}

//17******************************************************************************
char* func17(char* a)   //2B-3
{
	char* b=new char[200];
	int i=0,j,count=0;
	while (a[i]==' ') i++;
	for (j=i; a[j]!='\0'; j++);
	j--;
	while (a[j]==' ') j--;
	//i na posição do começo, e j na posição final!!!!
	for (int k=i; k<=j; k++)
	{
		b[count]=a[k];
		count++;
	}
	b[count]='\0';
	return b;
}

//18******************************************************************************
string* func18 (char* s, char a, int* b)   //2B-4
{
	int i=0;
	int cont=0;
	for (; s[i]!='\0'; i++)
	{
		if (s[i]==a)
		{
			cont++;
		}
	}
	//cont vai indicar quantos caracteres tem, logo ele vai determinar quantas strings serao alocadas
	string* ret=new string[cont+1];
	char ind[cont+1][i];
	int k=0;
	int h=0;
	int letra=0;
	for (; s[k]!='\0'; k++)
	{
		if (s[k]!=a)
		{
			ind[h][letra]=s[k];
			letra++; //passar pra proxima letra da string
			if (s[k+1]==a or s[k+1]=='\0')
			{
				ind[h][letra]='\0';
			}
		}
		else
		{
			h++;   //passar pra proxima string
			letra=0;
		}
	}
	*b=cont+1;   //alterando o valor por referencia
	int t=0;
	int y=0;
	for (; t<cont+1; t++)
	{
		ret[t]=ind[t];
	}
	return ret;
}

//19******************************************************************************
int func19(string a, string b)  //2B-5
{
	int i=0,j=0;
	int tamanho=b.length();
	int gliter;
	for (; a[i]!='\0'; i++)
	{
		if (a[i]==b[j])
		{
			gliter=j;
			for (; gliter<tamanho and a[i+gliter] == b[gliter]; gliter++);
			if (gliter>=tamanho)
			return i;
		}
	}
	return -1;
}

//20******************************************************************************
char* func20 (char*a, char*b)    //2B-6
{
	int i=0,j=0,k,l;
	
	for (; a[i]!='\0'; i++);
	//i vai ter o tamanho de a
	for (; b[j]!='\0'; j++);
	//j vai ter o tamanho de b

	int indA=i-1, indB=j-1;   //indicadores do tamanho	
	
	char*a1=new char[i];   //vetor novo A
	char*b1=new char[j];   //vetor novo B
	
	for (k=0; k<i; k++)   //invertendo a posição de A
	{
		a1[k]=a[indA-k];
	}
	for (l=0; l<j; l++)   //invertendo a posição de B
	{
		b1[l]=b[indB-l];
	}
	
	int salve=0;
	int cal;
	if (i>j)
	{
		cal=i;
	}
	else
	{
		cal=j;
	}
	
	char* r=new char[cal+1];
	
	int num1=0,num2=0,res=0;
	int passar=0;
	
	for (; salve<cal; salve++)
	{
		num1=0;
		num2=0;
		res=0;
		if (salve<i)
		{
			num1=(int)a1[salve]-48;
		}
		if (salve<j)
		{
			num2=(int)b1[salve]-48;
		}
		
		res=num1+num2+passar;
		passar=0;
		if (res>=10)
		{
			passar=1;
			res=res-10;
		}
		r[salve]=res+48;
		
		if (passar==1 and cal==salve+1)
		{
			cal++;
		}
	}
	r[salve]='\0';
	
	//agora so falta inverter kkkkkkkkkkkkkkkk
	
	char* r2=new char[salve];
	int loop=salve-1;
	int poop=0;
	for (; loop>=0; loop--,poop++)
	{
		r2[poop]=r[loop];
	}
	r2[poop]='\0';
	delete[] r;
	
	return r2;
}


