#include<iostream>
#include<iomanip>
using namespace std;
int main(int argc, char** argv)
{
	int n, c=0, r=0, s=0,  e;
	char t;
	float soma=0;
	
	cin>>n;
	
	for(int i=1;i<=n; i++){
		cin>>e>>t;
		while(e<1 || 15<e)
			cin>>e>>t;
		soma=soma+e;
		if(t=='C')
			c=c+e;
		if(t=='R')
			r=r+e;
		if(t=='S')
			s=s+e;
	}
	cout<<"Total: "<<soma<<" cobaias"<<endl;
	cout<<"Total de coelhos: "<<c<<endl;
	cout<<"Total de ratos: "<<r<<endl;
	cout<<"Total de sapos: "<<s<<endl;
	cout<<fixed<<setprecision(2);
	cout<<"Percentual de coelhos: "<<(c*100/soma)<<" %"<<endl;
	cout<<"Percentual de ratos: "<<(r*100/soma)<<" %"<<endl;
	cout<<"Percentual de sapos: "<<(s*100/soma)<<" %"<<endl;
	return 0;
}
