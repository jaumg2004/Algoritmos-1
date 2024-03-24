#include<iostream>
using namespace std;
int main(int argc, char** argv)
{
	int X;
	int soma=0;
	
	cin>>X;
	
	while(X!=-1){
		
		soma=soma+X;
		cin>>X;
	}
	cout<<soma+1<<endl;
	return 0;
}