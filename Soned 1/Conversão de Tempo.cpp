#include<iostream>
#include<iomanip>
using namespace std;
int main(int argc, char** argv)
{
	setlocale(LC_ALL,"Portuguese");
	//declaração de variaveis
	  int C, H, M, S;
	//entrada de dados
	  cin>>C;
	//calculo
	  if(C<3600 && C<60){
		    H=0;
		  	M=0;
		  	S=C;
	  }
		  else
		  {
			  H=C/3600;
		      M=(C%3600)/60;
			  S=(C%3600)%60;
		  }
	  
	//saída de dados
	  cout<<H<<":"<<M<<":"<<S<<endl;
	return 0;
}