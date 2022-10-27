
#include<iostream>
using namespace std;
int main()
{
	int HNJC_aa,HNJC_ma,HNJC_da,HNJC_an,HNJC_mn,HNJC_dn,HNJC_a,HNJC_m,HNJC_d;
	cout<<"ingrese la fecha actual :";
	cin>>HNJC_aa>>HNJC_ma>>HNJC_da;
	cout<<"ingrese la fecha de nacimiento :";
	cin>>HNJC_an>>HNJC_mn>>HNJC_dn;

	if(HNJC_da>HNJC_dn){
		HNJC_d=HNJC_da-HNJC_dn;

	}else{
		HNJC_da=HNJC_da+30;
		HNJC_ma=HNJC_ma-1;
		HNJC_d=HNJC_da-HNJC_dn;
	}
	if(HNJC_ma>HNJC_mn){
		HNJC_m=HNJC_ma-HNJC_mn;

	}else{
		HNJC_ma=HNJC_ma+12;
		HNJC_aa=HNJC_aa-1;
		HNJC_m=HNJC_ma-HNJC_mn;
	}
	HNJC_a=HNJC_aa-HNJC_an;
	cout<<"usted tiene "<<HNJC_a<<" años, "<<HNJC_m<<" meses, "<<HNJC_d<<" dias "<< endl;
	return 0;


}
