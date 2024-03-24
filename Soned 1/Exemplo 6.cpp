#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main(int argc, char** argv)
{
	setlocale(LC_ALL,"Portuguese");
	//declaração de variaveis
	  double X, Y, Z, A, B;
	//entrada de dados
	  cout<<"Digite os valores de X e Y"<<endl;
	  cin>>X>>Y;
	//cálculo
	  A=X+Y;
	  B=X-Y;  
	//saida de dados  
	  if(A<=0 || B<0)
	    cout<<"Calculo impossivel"<<endl;
	  else
	  {
		  Z=sqrt(A)/sqrt(B);
		  cout<<Z;
	  }
	return 0;
}