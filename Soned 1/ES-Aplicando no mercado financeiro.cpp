#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main(int argc, char** argv)
{
	setlocale(LC_ALL,"Portuguese");
	
	  double A, M, T, I, C;
	
	  cout<<"Digite o valor do capital"<<endl;
	  cin>>C;
	  cout<<"Digite o tempo de aplicação em meses"<<endl;
	  cin>>T;
	  cout<<"Digite a taxa de juros"<<endl;
	  cin>>I;
	
	  A=1+I/100;
	  M=C*pow(A,T);
	
	  cout<<setprecision(2)<<fixed<<"MONTANTE="<<M<<endl;      
	return 0;
}

