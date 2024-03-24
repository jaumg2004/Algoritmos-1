#include<iostream>
#include<iomanip>
using namespace std;
double kilometros(double mph){
	double x;
	x=mph*1.60934;
	
	return x;
}
int main()
{
	double mph, kmph;
	
	cin>>mph;
	while(mph<0)
		cin>>mph;
	
	kmph=kilometros(mph);
	
	cout<<fixed<<setprecision(1)<<kmph;
	
	return 0;
}