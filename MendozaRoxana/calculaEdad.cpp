#include<iostream>
using namespace std;
int main()
{
	int RYMG_aa,RYMG_ma,RYMG_da,RYG_an,RYMG_mn,RYMG_dn,RYMG_a,RYMG_m,RYMG_d;
	cout<<"ingrese la fecha actual :";
	cin>>RYMG_aa>>RYMG_ma>>RYMG_da;
	cout<<"ingrese la fecha de nacimiento :";
	cin>>RYMG_an>>RYMG_mn>>RYMG_dn;

	if(RYMG_da>RYMG_dn){
		RYG_d=RYMG_da-RYMG_dn;

	}else{
		RYMG_da=RYMG_da+30;
		RYMG_ma=RYMG_ma-1;
		RYMG_d=RYG_da-RYMG_dn;
	}
	if(RYMG_ma>RYMG_mn){
		RYMG_m=RYMG_ma-RYMG_mn;

	}else{
		RYMG_ma=RYMG_ma+12;
		RYMG_aa=RYMG_aa-1;
		RYMG_m=RYMG_ma-RYMG_mn;
	}
	RYMG_a=RYMG_aa-RYMG_an;
	cout<<"usted tiene "<<RYMG_a<<" años, "<<RYMG_m<<" meses, "<<RYMG_d<<" dias "<< endl;
	return 0;
}

