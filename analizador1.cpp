#include <iostream>
#include <stdio.h>
#include <string.h>
#include <string>
#include <cstdlib>
using namespace std;

//Funciones
void sum(char a, char b)
{
cout<<(a-48) + (b-48)<<endl;
}

void rest(char a, char b)
{
cout<<(a-48) - (b-48)<<endl;
}

void mul(char a, char b){
cout<<(a-48) * (b-48)<<endl;
}
//terminan funciones

//errores
void errores (string a,int num)
{
int longi=a.size();
if(a[longi-1]!=';')
{
	cout<<"error, falta ';' en la linea "<<num<<endl;
	}	
	
for(int i =0;i<longi;i++)
{
	if(a[i]==';')
	if(a[i+1]==';')
	{
	cout<<"error, hay dos ';' juntos en la linea "<<num<<endl;	
		}		
}
}//errores


void reservadas(string a,int num)
{
	int longi=a.size();	
for(int i =0;i<longi;i++)
{

	if(a[i]=='s' && a[i+1]=='u' && a[i+2]=='m' && a[i+3]=='a')
		sum(a[i+5],a[i+7]);
		
	if(a[i]=='r' && a[i+1]=='e' && a[i+2]=='s' && a[i+3]=='t' && a[i+4]=='a')
		rest(a[i+6],a[i+8]);
	
/*	if(a[i]=='mu')
	if(a[i+1]=='u')
	if(a[i+2]=='l')
	if(a[i+3]=='t')
	{		
	  mul(a[i+5],a[i+7]);
	}		*/
}
}//reservadas


int main()
{
	int c=1,cont=1;	
		string b[500];
		cout<<"Ingresa las instrucciones\n\n";
while (1==1)
{
	cout<<cont<<">";
	getline(cin,b[cont]);
	if(b[cont] =="?")
	{
		break;
	}
	cont++;
}	
for (c;c<cont;c++)
       {
       	errores(b[c],c);      	
		}
		
cout<<"\nResultado(s):\n";
for (c=0;c<cont;c++)
       {
       reservadas(b[c],c);      	
		}		
}
   
