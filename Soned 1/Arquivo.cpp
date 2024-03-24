#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	double x1, x2;
	ifstream arq;
	
	arq.open("arq1.txt", ifstream::in);
	
	arq>>x1>>x2;
	
	cout<<x1<<endl;
	cout<<x2<<endl;
	
	arq.close(); 
	
	return 0;
}