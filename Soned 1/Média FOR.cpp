#include<iostream>
using namespace std;
int main(int argc, char** argv)
{
	int N;
	float X, soma=0;
	
	cin>>N;
	
	for(int i=0; i<N; i++){
		cin>>X;
		soma=soma+X;
	}
	cout<<soma*N<<endl;
	return 0;
}