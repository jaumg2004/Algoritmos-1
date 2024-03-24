#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	double x, y, z, A, B, C;
	cin>>x;
	cin>>y;
	cin>>z;
	//X Y Z
	if (x >= y && x >= z && y >= z){
		A = x;
		B = y;
		C = z;
}	//X Z Y
    if (x >= y && x >= z && z >= y){
    	A = x;
    	B = z;
    	C = y;
}	//Y X Z
	if (y >= x && y >= z && x >= z){
		A = y;
		B = x;
		C = z;
}	//Y Z X
    if (y >= x && y >= z && z >= x){
    	A = y;
    	B = z;
    	C = x;
}	//Z X Y
	if (z >= x && z >= y && x >= y){
		A = z;
		B = x;
		C = y;
}	//Z Y X
    if (z >= x && z >= y && y >= x){
		A = z;
		B = y;
		C = x;
}

if (A >= B+C){
	cout<<"NAO FORMA TRIANGULO"<<endl;
	return 0;
}

if (pow(A,2) == (pow(B,2)+pow(C,2))){
	cout<<"TRIANGULO RETANGULO"<<endl;
}

if (pow(A,2) > (pow(B,2)+pow(C,2))){
	cout<<"TRIANGULO OBTUSANGULO"<<endl;
}

if (pow(A,2) < (pow(B,2)+pow(C,2))){
	cout<<"TRIANGULO ACUTANGULO"<<endl;
}

if (A == B && A == C && B == C){
	cout<<"TRIANGULO EQUILATERO"<<endl;
}

if (A == B && C != A && C != B){
	cout<<"TRIANGULO ISOSCELES"<<endl;
}

if (A == C && B != A && B != C){
	cout<<"TRIANGULO ISOSCELES"<<endl;
}

if (B == C && A != B && A != C){
	cout<<"TRIANGULO ISOSCELES"<<endl;
}	
	
	
	return 0;
}