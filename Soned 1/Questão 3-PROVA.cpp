#include<iostream>
using namespace std;
struct dados{
	int codigo;
	double peso;
}boi[40];
int main()
{
	int i=0;
	double soma=0, menor=999, maior=-999, cmenor, cmaior;
	
	cin>>boi[i].codigo;
	while(boi[i].codigo!=0 && i<40){
		cin>>boi[i].peso;
		while(boi[i].peso<100 || boi[i].peso>300)
			cin>>boi[i].peso;
		if(menor>boi[i].peso){
			menor=boi[i].peso;
			cmenor=boi[i].codigo;
		}
		if(maior<boi[i].peso){
			maior=boi[i].peso;
			cmaior=boi[i].codigo;
		}
		soma+=boi[i].peso;
		i++;
		cin>>boi[i].codigo;
	}
	cout<<"Peso total: "<<soma<<endl;
	cout<<"Peso medio: "<<soma/i<<endl;
	cout<<"Bois com peso acima da media: ";
	for(int j=0; j<i; j++){
		if(boi[j].peso>soma/i)
			cout<<boi[j].codigo<<" ";
	}
	cout<<endl;
	cout<<"Bois de maior peso: "<<cmaior<<endl;
	cout<<"Bois de menor peso: "<<cmenor<<endl;
	return 0;
}