#include<iostream>
#include<iomanip>
using namespace std;
void convert(int c, int &x, int &y, int &z){

	x = c/365; 
 	y = (c%365)/30;
 	z = (c%365)%30;
 	
	return;
}
int main()
{
	int dias, meses, anos, c;
	
	cin>>c;
	convert(c, anos, meses, dias);
	cout<<anos<<" anos, "<<meses<<" meses, "<<dias<<" dias"<<endl;
	
	return 0;
}