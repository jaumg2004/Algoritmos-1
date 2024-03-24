#include<iostream>
using namespace std;
int main()
{
	int N, X[1000], aux;
	
	do{
		cin>>N;
		
		for(int i=0; i<N; i++)
			cin>>X[i];
		for(int i=0; i<N; i++){
			for(int j=0; j<N-i-1; j++){
				if(X[j]>X[j+1]){
					aux=X[j];
					X[j]=X[j+1];
					X[j+1]=aux;
				}
			}
		}
		for(int k=0; k<N; k++){
			if(X[k]>=1000)
				cout<<X[k]<<endl;
			else if(X[k]<1000 && X[k]>=100)
				cout<<"0"<<X[k]<<endl;
			else if(X[k]<100 && X[k]>=10)
				cout<<"00"<<X[k]<<endl;
			else if(X[k]<10 && X[k]>=0)
				cout<<"000"<<X[k]<<endl;
			
		}
			
	}
	while(1<=N && N<=1000);
	return 0;
}