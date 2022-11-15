#include<iostream>
using namespace std;
int main()
{
	float RYMG_x,RYMG_s=0.0;
	int RYMG_i=0,RYMG_l;
	cout<<"ingrese el valor de RYMG_l :";
	cin>>RYMG_l;
	do{
		cout<<"ingrese el valor de RYMG_x :";
		cin>>RYMG_x;
		RYMG_i=RYMG_i+1;
		RYMG_s=RYMG_s+RYMG_x;
	}while(RYMG_i<RYMG_l);
	cout<<"la suma de los numeros fue : "<<endl;
	return 0;
}
