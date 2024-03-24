#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char palavra[20];
	int tamanho;
	 
	 cin.getline(palavra, 20);
	 tamanho=strlen(palavra);
	 if(tamanho>=10)
	 	cout<<"palavrao"<<endl;
	 else if(tamanho<10)
	 	cout<<"palavrinha"<<endl;
	 
	return 0;
}