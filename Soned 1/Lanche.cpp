#include<iostream>
#include<iomanip>
using namespace std;
int main(int argc, char** argv)
{
	//declaração de variaveis
	  int C, Q;
	  double P;
	//entrada de dados
	  cin>>C>>Q;
	//estrutura de decisão
	  switch(C){
		  case 1:
		  	P=Q*4;
            cout<<setprecision(2)<<fixed<<"Total: R$ "<<P<<endl;
		  	break;
		  case 2:
		  	P=Q*4.50;
		  	cout<<setprecision(2)<<fixed<<"Total: R$ "<<P<<endl;
		  	break;
		  case 3:
		  	P=Q*5;
		  	cout<<setprecision(2)<<fixed<<"Total: R$ "<<P<<endl;
		  	break;
		  case 4:
		  	P=Q*2;
		  	cout<<setprecision(2)<<fixed<<"Total: R$ "<<P<<endl;
		  	break;
          case 5:
		  	P=Q*1.5;
		  	cout<<setprecision(2)<<fixed<<"Total: R$ "<<P<<endl;
		  	break;

	  }
	
	return 0;
}