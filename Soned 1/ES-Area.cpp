#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main(int argc, char** argv)
{
	setlocale(LC_ALL,"Portuguese");
    //declaração de variaveis
      double A, B, C, D, E, F, G, H;
    //entrada de dados
	  cout<<"Digite um valor para A"<<endl;
	  cin>>A; 
      cout<<"Digite um valor para B"<<endl;
	  cin>>B; 
      cout<<"Digite um valor para C"<<endl;
	  cin>>C; 
	//calculos
	  D=A*C/2;
	  E=3.14159*pow(C,2);
	  F=(A+B)*C/2;
	  G=pow(B,2);
	  H=A*B;
	//saida de dados
	  cout<<setprecision(3)<<fixed<<"TRIANGULO="<<D<<endl; 
	  cout<<setprecision(3)<<fixed<<"CIRCULO="<<E<<endl;
	  cout<<setprecision(3)<<fixed<<"TRAPEZIO="<<F<<endl;
	  cout<<setprecision(3)<<fixed<<"QUADRADO="<<G<<endl;
	  cout<<setprecision(3)<<fixed<<"RETANGULO="<<H<<endl;   
	return 0;
}