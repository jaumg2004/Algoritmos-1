#include<iostream>
using namespace std;
int verifica(double valor){
	if(valor>=0)
		return 1;
	else
	{
		return 0;
	}
};
int main()
{
	double n;
	int x;
	cin>>n;
	x=verifica(n);
	if(x==0)
		cout<<n<<" é negativo..."<<endl;
	else
	{
		cout<<n<<" é positivo..."<<endl;
	}
	return 0;
}
