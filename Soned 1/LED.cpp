#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char num[100];
	int N, tam, cont;

	cin >> N;
	cin.ignore();
	for(int j = 1; j <= N; j++)
	{
		cin.getline(num, 100);
		tam = strlen(num);
		cont = 0;

		for(int i = 0; i < tam; i++)
		{
			if(num[i] == '0' || num[i] == '9' || num[i] == '6')
				cont += 6;
			if(num[i] == '2' || num[i] == '5' || num[i] == '3')
				cont += 5;
			if(num[i] == '4')
				cont += 4;
			if(num[i] == '1')
				cont += 2;
			if(num[i] == '7')
				cont += 3;
			if(num[i] == '8')
				cont += 7;

		}
		cout << cont << " leds" << endl;
	}


	return 0;
}
