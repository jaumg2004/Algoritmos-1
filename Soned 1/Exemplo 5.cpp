#include<iostream>
#include<iomanip>
using namespace std;
int main(int argc, char** argv)
{
	setlocale(LC_ALL,"Portuguese");
	//declara��o de variaveis
	  double f, x;
	//entrada de dados
	  cout<<"Digite um valor x"<<endl;
	  cin>>x;
	//c�lculo
	  f=(1/x);  
	//saida de dados  
	  if(x==0)
	    cout<<"C�lculo impossivel, divis�o por zero..."<<endl;
	return 0;
}