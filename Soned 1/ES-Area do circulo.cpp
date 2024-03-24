#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main(int argc, char** argv)
{
	setlocale(LC_ALL,"Portuguese");
	//declaração de variaveis
	  double R, A;
	//entrada de dados
	  cout<<"Digite o vlor do raio do circulo"<<endl;
	  cin>>R;
	//calculo
	  A=3.14159*pow(R,2);
	//saida de dados
	  cout<<setprecision(3)<<fixed<<"AREA="<<A<<endl;      
	  
	  
	  
	return 0;
}