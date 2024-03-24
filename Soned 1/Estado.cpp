#include<iostream>
using namespace std;
int main(int argc, char** argv)
{
	//declaração de variaveis
	  char nome[50], estado1[10], estado2[10];
	  int idade;
	//entrada de dados
	  cout<<"Digite o nome: "<<endl;
	  cin.getline(nome,50);
	  cout<<"Digite o estado de origem: "<<endl;
	  cin>>estado1>>estado2;
	  cin.ignore();
      cout<<"Digite sua idade: "<<endl;  
	  cin>>idade;
	//saida de dados
	  cout<<"Nome: "<<nome<<endl;
	  cout<<"Estado: "<<estado1<<" "<<estado2<<endl;
	  cout<<"Idade: "<<idade<<endl;
	return 0;
}