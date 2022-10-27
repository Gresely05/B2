
#include<iostream>
using namespace std;
int main()
{
	float HNJC_x,HNJC_i=0,HNJC_s=0,HNJC_l;
	cout<<"Ingrese el valor de l: ";
	cin>>HNJC_l;
	do{
		cout<<"Ingrese el valor de x: ";
		cin>>HNJC_x;
		HNJC_i=HNJC_i+1;
		HNJC_s=HNJC_s+HNJC_x;
	}while(HNJC_i<HNJC_l);

	cout<<"La suma de los numeros fue: "<<HNJC_s<<endl;
	return 0;
}


