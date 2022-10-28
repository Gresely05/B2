#include<iostream>
using namespace std;
int main()
{
	float DSEO_x,DSEO_s=0,DSEO_s1=0,DSEO_s5=0;
	int DSEO_i=0,DSEO_l,DSEO_i1=0,DSEO_i5=0;
	cout<<"Ingrese l: ";
	cin>>DSEO_l;
	do{
		cout<<"Ingrese x : ";
		cin>>DSEO_x;
		DSEO_i=DSEO_i+1;
		DSEO_s=DSEO_s+DSEO_x;
		if(DSEO_x==1){
			DSEO_i1=DSEO_i1+1;
			DSEO_s1=DSEO_s1+DSEO_x;

		}else{
			DSEO_i5=DSEO_i5+1;
			DSEO_s5=DSEO_s5+DSEO_x;
		}

	}while(DSEO_i<DSEO_l);
	cout<<"La cantidad de monedas fue : "<<DSEO_i<<endl;
	cout<<"El valor fue: "<<DSEO_s<<endl;

	cout<<"La cantidad de monedas s1 fue : "<<DSEO_i1<<endl;
	cout<<"El valor fue : "<<DSEO_s1<<endl;

	cout<<"La cantidad de monedas .5";
	cout<<"El valor fue : "<<DSEO_s5<<endl;
	return 0;

}
