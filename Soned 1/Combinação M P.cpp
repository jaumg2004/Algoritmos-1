#include<iostream>
using namespace std;
int COMBINA(int M, int P){
	int fatM=1, fatP=1, fatX=1;
	
	for(int i=M; i>1; i--){
		fatM=fatM*i;
	}
	for(int j=P; j>1; j--){
		fatP=fatP*j;
	}
	for(int k=M-P; k>1; k--){
		fatX=fatX*k;
	}
	
	return fatM/(fatX*fatP);
}
int main()
{
	int C, M, P;
	
	cin>>M>>P;
	while(M<P)
		cin>>M>>P;
	C=COMBINA(M, P);
	cout<<C;
	return 0;
}