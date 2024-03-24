#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
double montante(double c, double i, double n){
	double m;
	
	m = c*pow(1+i/100, n);
	
	return m;
}
int main()
{
	double c, i, n;
	
	cin>>c;
	cin>>i;
	cin>>n;
	
	
	cout<<fixed<<setprecision(2)<<montante(c, i, n)<<endl;
	return 0;
}