#include<iostream>
#include<cstring>
using namespace std;
int main(int argc, char** argv)
{
	char cidade[51];
	
	cin.getline(cidade,51);
	
    if(strcmp(cidade,"Brasilia")==0)
			cout<<"61"<<endl;
			
	if(strcmp(cidade,"Salvador")==0)
			cout<<"71"<<endl;
	
	if(strcmp(cidade,"Sao Paulo")==0)	
			cout<<"11"<<endl;
		
	if(strcmp(cidade,"Rio de Janeiro")==0)	
			cout<<"21"<<endl;
		
	if(strcmp(cidade,"Juiz de Fora")==0)
			cout<<"32"<<endl;
		
	if(strcmp(cidade,"Campinas")==0)
			cout<<"19"<<endl;
		
	if(strcmp(cidade,"Vitoria")==0)
			cout<<"27"<<endl;

	if(strcmp(cidade,"Belo Horizonte")==0)	
			cout<<"31"<<endl;
		
		else
			cout<<"DDD nao cadastrado"<<endl;
	
	
	return 0;
}