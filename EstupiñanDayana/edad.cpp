#include<iostream>
using namespace std;
int main()
{
	int DSEO_aa,DSEO_ma,DSEO_da,DSEO_an,DSEO_mn,DSEO_dn,DSEO_a,DSEO_m,DSEO_d;
	cout<<"Ingrese la fecha actual : ";
	cin>>DSEO_aa>>DSEO_ma>>DSEO_da;

	cout<<"Ingrese la fecha de nacimiento : ";
	cin>>DSEO_an>>DSEO_mn>>DSEO_dn;
	if(DSEO_da>DSEO_dn){
		DSEO_d=DSEO_da-DSEO_dn;
	}else{
		DSEO_da=DSEO_da+30;
		DSEO_ma=DSEO_ma-1;
		DSEO_d=DSEO_da-DSEO_dn;
	}
	if(DSEO_ma>DSEO_mn){
		DSEO_m=DSEO_ma-DSEO_mn;
	}else{
		DSEO_ma=DSEO_ma+12;
		DSEO_aa=DSEO_aa-1;
		DSEO_m=DSEO_ma-DSEO_mn;
	}
	DSEO_a=DSEO_aa-DSEO_an;
	cout<<"Usted tiene "<<DSEO_a<<" años, "<<DSEO_m<<" meses, "<<DSEO_d<<" dias "<<endl;
	return 0;

}
