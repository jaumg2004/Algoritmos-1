#include<iostream>
using namespace std;
int main()
{
	int X, Y, i=1;
	
	do{
		cin>>X>>Y;
		if(X>Y){
			cout<<"Decrescente"<<endl;
		}
		if(X<Y){
			cout<<"Crescente"<<endl;
		}
		i++;
	}
	while(X!=Y);
	return 0;
}