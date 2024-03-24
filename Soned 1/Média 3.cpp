#include<iostream>
#include<iomanip>
using namespace std;
int main(int argc, char** argv)
{
      
	   double N1, N2, N3, N4, M, NE, MF;
	
	  cin>>N1>>N2>>N3>>N4;
	
	  M=((N1*2)+(N2*3)+(N3*4)+(N4*1))/(2+3+4+1);
	
	  if(M>=7 && M<=10){
	  	cout<<"Media: "<<setprecision(1)<<fixed<<M<<endl;
	    cout<<"Aluno aprovado."<<endl;
	  } 
	  if(M<5 && M>=0){
		cout<<"Media: "<<setprecision(1)<<fixed<<M<<endl;
	    cout<<"Aluno reprovado."<<endl; 
	  }    
	  
	  if(M>=5 && M<7){
	  	
	  	cin>>NE;
	  	
	  	MF=(NE+M)/2;
	  	
	  	if(MF>=5){
		cout<<"Media: "<<setprecision(1)<<fixed<<M<<endl;
	    cout<<"Aluno em exame."<<endl;
	    cout<<"Nota do exame: "<<NE<<endl;
	    cout<<"Aluno aprovado."<<endl;
	    cout<<"Media Final: "<<setprecision(1)<<fixed<<MF<<endl;
	    
		
	  }    
	    else{
        cout<<"Media: "<<setprecision(1)<<fixed<<M<<endl;
	    cout<<"Aluno em exame."<<endl;
	    cout<<"Nota do exame: "<<NE<<endl;
	    cout<<"Aluno reprovado."<<endl;
	    cout<<"Media Final: "<<setprecision(1)<<fixed<<MF<<endl;
			
		}
	    	
	  }
 
	return 0;
}
