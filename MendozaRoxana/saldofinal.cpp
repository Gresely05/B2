#include<iostream>
using namespace std;
int main()
{
	float RYMG_x,RYMG_s=0;
	int RYMG_i=0,RYMG_l;
	cout<<"ingrese cantidad de egresos (RYMG_l) : ";
	cin>>RYMG_l;
	cout<<"ingrese saldo inicial (RYMG_s) : ";
	cin>>RYMG_s;
	do{
		cout<<"ingrese egreso (RYMG_x) : ";
		cin>>RYMG_x;
		RYMG_i=RYMG_i+1;
		RYMG_s=RYMG_s+RYMG_x;
	}while(RYMG_i<RYMG_l);
cout<<"el saldo final es : "<<RYMG_s<<endl;
return 0;
}

