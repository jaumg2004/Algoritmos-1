#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int Y;
	double X, soma;
	
	do{
		soma=0;
		for(int i=1; i<=2; i++){

			cin>>X;
			while(X<0 || X>10){
				cout<<"nota invalida"<<endl;
				cin>>X;
			}
				soma+=X;	
		}	
		 cout<<fixed<<setprecision(2)<<"media ="<<soma/2<<endl;
         cout<<"novo calculo (1-sim 2-nao)"<<endl;
         cin>>Y;
         while(Y!=1 && Y!=2){
			 cout<<"novo calculo (1-sim 2-nao)"<<endl;
             cin>>Y;
		 }
	}
	while(Y==1);
	return 0;
}