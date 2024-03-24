#include<iostream>
using namespace std;
int main(int argc, char** argv)
{
	setlocale(LC_ALL,"Portuguese");
	//declaração de variaveis
	  int C, A, M, D;
	//entrada de dados
	  cin>>C;
	//calculo
	  if(C<365 && C<30){
		    A=0;
		  	M=0;
		  	D=C;
	  }
		  else
		  {
			  A=C/365;
		      M=(C%365)/30;
			  D=(C%365)%30;
		  }
	  
	//saída de dados
	   cout<<A<<" ano(s)"<<endl;
       cout<<M<<" mes(es)"<<endl;
       cout<<D<<" dia(s)"<<endl;
	   
	return 0;
}