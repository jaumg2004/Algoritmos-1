#include<iostream>
using namespace std;
int main(int argc, char** argv)
{
	int X, maior, posmaior=1;
	
	cin>>X;
	maior=X;
	
	for(int i=2; i<=6; i++){
		cin>>X;
		if(X>maior){
			maior=X;
			posmaior=i;
			
		}
	}
	cout<<maior<<endl;
	cout<<posmaior<<endl;
	return 0;
}