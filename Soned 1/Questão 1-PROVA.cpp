#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main()
{
	double x, y, h, g;
	
	cin>>x>>y;
	
	if(x>=y){
		g=x-y;
	}
	else{
		g=x+y;
	}
	
	if(g>0){
		h=pow(x,2)+y;
		cout<<fixed<<setprecision(2)<<g/h<<endl;
	}
	else if(g==0){
		cout<<"Cálculo impossível"<<endl;
	}
	else{
		h=pow(y,2)+x;
		cout<<fixed<<setprecision(2)<<g/h<<endl;
	}
	return 0;
}