#include<iostream>
using namespace std;
int main()
{
	float JAGC_x,JAGC_i=0,JAGC_s=0,JAGC_l;
	cout<<"Ingrese el valor de l: ";
	cin>>JAGC_l;
	do{
		cout<<"Ingrese el valor de x: ";
		cin>>JAGC_x;
		JAGC_i=JAGC_i+1;
		JAGC_s=JAGC_s+JAGC_x;
	}while(JAGC_i<JAGC_l);

	cout<<"La suma de los numeros fue: "<<JAGC_s<<endl;
	return 0;
}

