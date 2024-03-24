#include<iostream>
#include<iomanip>
using namespace std;
int main(int argc, char** argv)
{
	setlocale(LC_ALL,"Portuguese");
	//declaração de variaveis
	  double P, R, T;
	//entrada de dados
	  cout<<"Digite o valor da compra"<<endl;
	  cin>>P;
	  cout<<"Digite o valor que Zezinho pagou"<<endl;
	  cin>>R;
	//calculo
	   T=R-P;
	//saída de dados
	  cout<<setprecision(2)<<fixed<<"TROCO="<<T<<endl;    
	return 0;
}