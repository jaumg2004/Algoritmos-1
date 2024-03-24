#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
	int num, X=1;
	float nota1, nota2, nota3, ME, MA;
	
	do{
		cin>>num;
		
		cin>>nota1;
		while(nota1<0 || nota1>10)
			cin>>nota1;
		
		cin>>nota2;
		while(nota2<0 || nota2>10)
			cin>>nota2;
		
		cin>>nota3;
		while(nota3<0 || nota3>10)
			cin>>nota3;
		
		cin>>ME;
		while(ME<0 || ME>10)
			cin>>ME;
		
		MA=((nota1+cbrt(nota2)+pow(nota3,0.2)+ME)/2.5);
		
		cout<<num<<endl;
		cout<<nota1<<" "<<nota2<<" "<<nota3<<" "<<ME<<endl;
		cout<<fixed<<setprecision(2)<<MA<<endl;
		
		if(MA>=9 && MA<10){
			cout<<"A"<<endl;
			cout<<"Aprovado"<<endl;
			cout<<" "<<endl;
		}
		if(MA>=7.5 && MA<9){
			cout<<"B"<<endl;
			cout<<"Aprovado"<<endl;
			cout<<" "<<endl;
		}
		if(MA>=6 && MA<7.5){
			cout<<"C"<<endl;
			cout<<"Aprovado"<<endl;
			cout<<" "<<endl;
		}
		if(MA>=4 && MA<6){
			cout<<"D"<<endl;
			cout<<"Reprovado"<<endl;
			cout<<" "<<endl;
		}
		if(MA<4 && MA>=0){
			cout<<"E"<<endl;
			cout<<"Reprovado"<<endl;
			cout<<" "<<endl;
		}
		
		X++;
	}
	while(X<=3);
	
	return 0;
}