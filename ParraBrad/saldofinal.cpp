#include<iostream>
using namespace std;
int main()
{
	float BDPC_x,BDPC_s=0;
	int BDPC_i=0,BDPC_l;
	cout<<"ingrese cantidad de egresos (BDPC_l) : ";
	cin>>BDPC_l;
	cout<<"ingrese saldo inicial (BDPC_s) : ";
	cin>>BDPC_s;
	do{
		cout<<"ingrese egreso (BDPC_x) : ";
		cin>>BDPC_x;
		BDPC_i=BDPC_i+1;
		BDPC_s=BDPC_s+BDPC_x;
	}while(BDPC_i<BDPC_l);
cout<<"el saldo final es : "<<BDPC_s<<endl;
return 0;
}

