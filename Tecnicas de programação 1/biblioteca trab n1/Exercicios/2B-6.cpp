#include <iostream>
using namespace std;

/* 6. Faça uma função em C++ com nome soma_numeros_gigantes que receba como parâmetros dois
ponteiros para duas strings (vetor de char) distintas que contenham apenas números. A função
deverá realizar a soma dos valores desses números e retornar uma outra string com o resultado da
soma. Não usar o tipo string. Veja um exemplo:
String 1: "565610"
String 2: "45646545465"
Retorno da função: "45647111075"
Note que o resultado deverá ser o ponteiro de uma nova string (vetor de char). O algoritmo deverá
realizar a soma algarismo a algarismo, exatamente como, geralmente, aprendemos na escola. Faça
um programa em C++ que teste a função.*/

char* soma_numeros_gigantes (char*a, char*b)
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

int main()
{
    char a[300],b[300];
    cin>>a>>b;
    
    char* resultado=soma_numeros_gigantes(a,b);
    
	cout<<resultado;
	
	//BRABISSIMA, MUITO FACIL, IZI Q ISSO OMG >:)
	
	return 0;
}
