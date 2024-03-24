#include<iostream>
using namespace std;
int main()
{
	double SB=6800, SJ=9500, soma1=0, soma2=0;
	int i=0 ;
	do{
		soma1=soma1+(SJ*0.009);
		soma1=SJ;
		soma2=SB+(SB*0.0225);
		soma2=SB;
		i++;
	}while(soma1>soma2);
	cout<<i<<" anos"<<endl;
	cout<<SB<<" habitantes"<<endl;
	cout<<SJ<<" habitantes"<<endl;
	return 0;
}