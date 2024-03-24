#include<iostream>
#include<iomanip>
using namespace std;
int main(int argc, char** argv)
{
	setlocale(LC_ALL,"Portuguese");
	//declaração de variaveis
	  double f, x;
	//entrada de dados
	  cout<<"Digite um valor x"<<endl;
	  cin>>x;
	//cálculo
	  f=(1/x);  
	//saida de dados  
	  if(x==0)
	    cout<<"Cálculo impossivel, divisão por zero..."<<endl;
	return 0;
}