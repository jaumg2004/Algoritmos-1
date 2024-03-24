#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main(int argc, char** argv)
{
	setlocale(LC_ALL,"Portuguese");
	//declaração de dados
	  double N, V, H, S;
	//entrada de dados
	  cout<<"Digite o número do funcionario"<<endl;
	  cin>>N;  
	  cout<<"Digite o total de horas que o funcionario trabalhou"<<endl;
	  cin>>H;
	  cout<<"Digite o valor que o funcionario ganha por hora"<<endl;
	  cin>>V;
	//calculo
	  S=H*V;
	//saída de dados
	  cout<<"NÚMERO="<<N<<endl;
	  cout<<setprecision(2)<<fixed<<"SALÁRIO="<<S<<endl;    
	return 0;
}