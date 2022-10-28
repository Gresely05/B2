#include<iostream>
using namespace std;
int main()
{
	float DSEO_x,DSEO_s=0,DSEO_vb,DSEO_piva=12,DSEO_viva,DSEO_pdesc=10,DSEO_vdesc,DSEO_vn;
	int DSEO_i=0,DSEO_l;
	cout<<"Ingrese l: ";
	cin>>DSEO_l;
	do{
		cout<<"Ingrese x: ";
		cin>>DSEO_x;
		DSEO_i=DSEO_i+1;
		DSEO_s=DSEO_s+DSEO_x; 
	}while(DSEO_i<DSEO_l);
	DSEO_vb=DSEO_s;
	DSEO_viva=DSEO_vb*DSEO_piva/100;
	DSEO_vdesc=DSEO_vb*DSEO_pdesc/100;
	DSEO_vn=DSEO_vb+DSEO_viva-DSEO_vdesc;
	cout<<"El valor a pagar es de: "<<DSEO_vn<<endl;
	return 0;
	
}

