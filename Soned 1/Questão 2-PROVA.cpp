#include<iostream>
#include<iomanip>
#include<cstring>
using namespace std;

int main()
{
	char nome[51];
	int reservas, tipo[100], dia[100], tipo3[100], taxa[100];
	int tipo1=0, tipo2=0, dia1=0, dia2=0, dia3=0, tdia=0, soma=0;
	
	cout<<"Quantas reservas?"<<endl;
	cin>>reservas;
	
	for(int i=0; i<reservas; i++){
        cin.ignore();
		cin.getline(nome, 51);
		cin>>tipo[i];
		while(tipo[i]!=1 && tipo[i]!=2)
			cin>>tipo[i];
		if(tipo[i]==1){
			tipo1+=tipo[i];
			tipo3[i]=150;
		}
		if(tipo[i]==2){
			tipo2+=tipo[i];
			tipo3[i]=120;
		}
		cin>>dia[i];
		while(dia[i]<=0)
			cin>>dia[i];
		if(dia[i]<=3){
			dia1+=dia[i];
			tdia=tdia+dia[i];
			taxa[i]=30;
		}
		else if(dia[i]>3 && dia[i]<=6){
			dia2+=dia[i];
			tdia=tdia+dia[i];
			taxa[i]=20;
		}
		else{
			dia3+=dia[i];
			tdia=tdia+dia[i];
			taxa[i]=0;
		}
		soma+=(dia[i]*tipo3[i])+taxa[i];
	}
	cout<<"Total de diarias: "<<tdia<<endl;
	cout<<fixed<<setprecision(2);
	cout<<"Valor total: "<<soma<<endl;
	cout<<fixed<<setprecision(1);
	cout<<"Percentual de acomodação executiva: "<<tipo1*100.0/(tipo1+tipo2)<<" %"<<endl;
	cout<<"Percentual de acomodação de luxo: "<<tipo2*100.0/(tipo1+tipo2)<<" %"<<endl;
	cout<<"Percentual de diarias em até 3 dias: "<<dia1*100.0/tdia<<" %"<<endl;
	cout<<"Percentual de diarias entre 3 á 6 dias: "<<dia2*100.0/tdia<<" %"<<endl;
	cout<<"Percentual de diarias pra mais de 6 dias: "<<dia3*100.0/tdia<<" %"<<endl;
	return 0;
}