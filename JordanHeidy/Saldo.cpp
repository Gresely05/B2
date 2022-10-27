#include<iostream>
using namespace std;
int main()
{
	float HNJC_x,HNJC_s=0;
	int HNJC_i=0,HNJC_l;
	cout<<"Ingrese cantidad de egrasos (1) : ";
	cin>>HNJC_l;
	cout<<"Ingrese el saldo inicial (s) : ";
	cin>>HNJC_s;
	do{
		cout<<"Ingrese egreso (x) : ";
		cin>>HNJC_x;
		HNJC_i=HNJC_i+1;
		HNJC_s=HNJC_s+HNJC_x;
	}while(HNJC_i<HNJC_l); 
	cout<<"El saldo final es: "<<HNJC_s<<endl;
	return 0;


}
