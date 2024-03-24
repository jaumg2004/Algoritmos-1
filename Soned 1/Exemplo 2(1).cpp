#include<iostream>
using namespace std;

double soma(double x, double y ){
	
	return x+y;
}
double subt(double x, double y){
	
	return x-y;
}

int main()
{
	double x, y;
	
	cin>>x;
	cin>>y;
	
	
	cout<<soma(x, y)<<endl;
	cout<<subt(x, y)<<endl;
	return 0;
}
