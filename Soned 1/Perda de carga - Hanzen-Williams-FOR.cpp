#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float J, C, D;
	
	cin>>D>>C;
	
	for(int i=1, Q=10; i<=9; i++, Q+=5){
		J=pow(Q, 1.85)*10.643*pow(D, 4.87)*pow(C, -1.85);
		cout<<"Q = "<<Q<<" J = "<<J<<endl;
	}
	return 0;
}