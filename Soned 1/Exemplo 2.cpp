#include<iostream>
#include<iomanip>
using namespace std;

int main(int argc, char** argv)
{   setlocale(LC_ALL,"Portuguese");
    //calcula a média de 4 notas
    
    double N1, N2, NP, NL, MF;
    
    //entrada de dados
    inicio:
	cout<<"\nDigite a primeira nota do teorica"<<endl;
	cin>>N1;
	cout<<"\nDigite a segunda nota teorica"<<endl;
	cin>>N2;
	cout<<"\nDigite a nota prática do aluno"<<endl;
	cin>>NL;
	//cálculo da média
	
	NP=(N1+N2)/2;
	
	cout<<"nota pratica média do aluno"<<NP<<endl;
	
	MF=(NP*0.7)+(NL*0.3);
	
	cout<<"\nMédia Final"<<MF<<endl;
	
	//saída de dados
	
	if(MF>=60)
		cout<<"APROVADO"<<endl;
	else
		cout<<"REPROVADO"<<endl;
	

	return 0;

	
}