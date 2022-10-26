#include<iostream>
using namespace std;
int main()
{
	float JAGC_x,JAGC_s=0;
	int JAGC_i=0,JAGC_l;
	cout<<"Ingrese cantidad de egrasos (1) : ";
	cin>>JAGC_l;
	cout<<"Ingrese el saldo inicial (s) : ";
	cin>>JAGC_s;
	do{
		cout<<"Ingrese egreso (x) : ";
		cin>>JAGC_x;
		JAGC_i=JAGC_i+1;
		JAGC_s=JAGC_s+JAGC_x;
	}while(JAGC_i<JAGC_l); 
	cout<<"El saldo final es: "<<JAGC_s<<endl;
	return 0;

}
