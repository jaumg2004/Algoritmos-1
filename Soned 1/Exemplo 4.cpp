#include<iostream>
#include<iomanip>
using namespace std;
int main(int argc, char** argv)
{
	setlocale(LC_ALL,"Portuguese");
	//declaração de variaveis
	  int idade;
	//entrada de dados
	  cout<<"Digite a idade do paciente"<<endl;
	  cin>>idade;
	//saida de dados
	  if(idade>=18)
	  	cout<<"Maior de idade"<<endl;
	  else
	    cout<<"Menor de idade"<<endl; 
	return 0;
}