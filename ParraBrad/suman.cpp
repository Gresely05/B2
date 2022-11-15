#include<iostream>
using namespace std;
int main()
{
	float BDPC_x,BDPC_s=0.0;
	int BDPC_i=0,BDPC_l;
	cout<<"ingrese el valor de BDPC_l :";
	cin>>BDPC_l;
	do{
		cout<<"ingrese el valor de BDPC_x :";
		cin>>BDPC_x;
		BDPC_i=BDPC_i+1;
		BDPC_s=BDPC_s+BDPC_x;
	}while(BDPC_i<BDPC_l);
	cout<<"la suma de los numeros fue : "<<endl;
	return 0;
}
