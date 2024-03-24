#include<iostream>
#include<cmath>
using namespace std;
double modulo(double x, double y, double z){
	double m;
	
	m=sqrt(pow(x,2)+pow(y,2)+pow(z,2));
	
	return m;
}
int main()
{
	double x, y, z, mv, xversor, yversor, zversor;
	
	cout<<"Digite os componentes do vetor(x, y,z): ";
	cin>>x>>y>>z;
	mv=modulo(x, y, z);
	xversor=x/mv;
	yversor=y/mv;
	zversor=z/mv;
	cout<<"Versor: (";
	cout<<xversor<<","<<yversor<<","<<zversor<<")";
	return 0;
}