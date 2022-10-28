#include<iostream>
using namespace std;
int main()
{
	float DSEO_x,DSEO_s=0;
	int DSEO_i=0,DSEO_l;
	cout<<"Ingrese cantidad de egrasos (1) : ";
	cin>>DSEO_l;
	cout<<"Ingrese el saldo inicial (s) : ";
	cin>>DSEO_s;
	do{
		cout<<"Ingrese egreso (x) : ";
		cin>>DSEO_x;
		DSEO_i=DSEO_i+1;
		DSEO_s=DSEO_s+DSEO_x;
	}while(DSEO_i<DSEO_l); 
	cout<<"El saldo final es: "<<DSEO_s<<endl;
	return 0;

}
