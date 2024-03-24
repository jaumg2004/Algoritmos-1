#include <iostream>

#include <cstring>

using namespace std;
struct dados{
	char nome[50];
	int idade;
	char sexo;
};
int main(){
//variaveis:
	dados participantes[400];
	int FLAG;
	int Contador = 0;
//operacoes:
	cout << "INSCRICAO DO FESTIVAL DOS PIMPOLHOS:" << endl;
	do
	{
		cout << "Nome do Pimpolho: ";
		cin.ignore();
		cin.getline(participantes[Contador].nome, 50);
		cout << "----------------------------------------" << endl;
		cout << "Idade do Pimpolho: ";
		cin >> participantes[Contador].idade;
		cout << "----------------------------------------" << endl;
		cout << "Sexo do Pimpolho(H para Homens e M para Mulheres): ";
		cin>>participantes[Contador].sexo;
		while(participantes[Contador].sexo!='H' && participantes[Contador].sexo!='M'){
			cout << "Esse Sexo NAO EXISTE, digite novamente KAREN" << endl;
			cin >> participantes[Contador].sexo;
		}
		cout << "Agora para cadastrar um novo PIMPOLHO: digite um numero que não é 1 !!!" << endl;
		
		cin >> FLAG;
		Contador++;
	}
	while(FLAG != 1);
		cout << endl;
	cout << "-------------------------------------------------------------------------------";
	cout<< endl;
	
	return 0;
}