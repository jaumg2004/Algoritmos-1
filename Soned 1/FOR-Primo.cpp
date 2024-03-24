#include<iostream>
#include<iomanip>
using namespace std;

int main(int argc, char** argv)
{
	int X;
	int cont=0;
	
	cin>>X;
	
	for(int i=1; i<=X; i++){
		if(X%i==0)
			cont++;
	}
	if(cont==2)
		cout<<"e primo"<<endl;
	else
	{
		cout<<"nao e primo"<<endl;
	}
	return 0;
}