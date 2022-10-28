#include<iostream>
using namespace std;
int main()
{
	float DSEO_x,DSEO_i=0,DSEO_s=0,DSEO_l;
	cout<<"Ingrese el valor de l: ";
	cin>>DSEO_l;
	do{
		cout<<"Ingrese el valor de x: ";
		cin>>DSEO_x;
		DSEO_i=DSEO_i+1;
		DSEO_s=DSEO_s+DSEO_x;
	}while(DSEO_i<DSEO_l);

	cout<<"La suma de los numeros fue: "<<DSEO_s<<endl;
	return 0;
}
