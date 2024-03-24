#include<iostream>
using namespace std;
int main()
{
	int cont=0, idade, velho=-999, novo=999, cidade, cidade1=0, cidade2=0, nota, nota1=0, nota2=0;
	
	do{
		cout<<"Digite 1 ou 2 para registrar as cidades dos visitantas"
		cin>>cidade;
		while(cidade!=1 && cidade!=2){
			cout<<"Digite 1 ou 2 para registrar as cidades dos visitantas"
			cin>>cidade;
		}
		if(cidade==1)
			cidade1++;
		if(cidade==2)
			cidade2++;
		cin>>nota;
		cout<<"Digite 1 ou 2 para sabermos a avaliação da FETIN de cada visitante"
		while(nota!=1 && nota!=2){
			cout<<"Digite 1 ou 2 para sabermos a avaliação da FETIN de cada visitante"
			cin>>nota;
		}
		if(nota==1)
			nota1++;
		if(nota==2)
			nota2++;
		cout<<"Digite a idade de cada visitante"<<endl;
		cin>>idade;
		if(idade>velho)
			velho=idade;
		if(idade<novo)
			novo=idade;
		cont++;
	}while(idade>0);
	cout<<cidade1*100.0/cont<<"% são de Santa Rita do Sapucaí"<<endl;
	cout<<cidade2*100.0/cont<<"% são de outras cidades"<<endl;
	cout<<nota1*100.0/cont<<"% acharam q a feira foi boa"<<endl;
	cout<<nota2*100.0/cont<<"% acharam q a feira foi muito boa"<<endl;
	cout<<velho<<endl;
	cout<<novo<<endl;
	return 0;
}