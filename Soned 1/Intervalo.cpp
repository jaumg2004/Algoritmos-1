#include<iostream>
using namespace std;
int main(int argc, char** argv)
{
    //declaração de variaveis
      float A;
    //entrada de dados
      cin>>A;
    //estrtura de decisão
	  if(0<=A && A<=25)
	  	cout<<"Intervalo [0,25]"<<endl;
  	  
      if(25<A && A<=50)
		cout<<"Intervalo (25,50]"<<endl;
		
      if(50<A && A<=75)
		cout<<"Intervalo (50,75]"<<endl;
		
      if(75<A && A<=100)
		cout<<"Intervalo (75,100]"<<endl;
	  
      if(A>100 || A<0) 
	  	cout<<"Fora de intervalo"<<endl;
	  
	      
	return 0;
}