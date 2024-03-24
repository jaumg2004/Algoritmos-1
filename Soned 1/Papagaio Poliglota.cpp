#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char perna[20];
	while(cin.getline(perna, 20)){
		if(strcmp(perna, "esquerda")==0)
			cout<<"ingles"<<endl;
		if(strcmp(perna, "direita")==0)
			cout<<"frances"<<endl;
		if(strcmp(perna, "nenhuma")==0)
			cout<<"portugues"<<endl;
		if(strcmp(perna, "as duas")==0)
			cout<<"caiu"<<endl;
	}
	return 0;
}