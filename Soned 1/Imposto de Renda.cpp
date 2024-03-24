#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    
      double I, S;
    
      cin>>S;
   
	  if(0<=S && S<=2000)
	  	cout<<"Isento"<<endl;
  	  
      if(2000<S && S<=3000){
      	I=((S-2000)*0.08);
		cout<<fixed<<setprecision(2)<<"R$ "<<I<<endl;
	  }
		
     if(3000<S && S<=4500){
      	I=((S-3000)*0.18)+80;
		cout<<fixed<<setprecision(2)<<"R$ "<<I<<endl;
	  }
	 if(4500<S){
      	I=I=((S-4500)*0.28)+350;
		cout<<fixed<<setprecision(2)<<"R$ "<<I<<endl;
	  } 
	  
	      
	return 0;
}