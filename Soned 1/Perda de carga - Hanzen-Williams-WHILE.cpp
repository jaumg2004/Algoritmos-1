#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float J, D, C;
	int Q=10, i=1;
	
	cin>>D>>C;
	
	while(i<=9){
		J=pow(Q, 1.85)*10.643*pow(D, 4.87)*pow(C, -1.85);
		cout<<"Q = "<<Q<<" J = "<<J<<endl;
		Q=Q+5;
		i++;
	}
	return 0;
}