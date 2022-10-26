#include<iostream>
using namespace std;
int main()
{
	int JAGC_aa,JAGC_ma,JAGC_da,JAGC_an,JAGC_mn,JAGC_dn,JAGC_a,JAGC_m,JAGC_d;
	cout<<"Ingrese la fecha actual : ";
	cin>>JAGC_aa>>JAGC_ma>>JAGC_da;

	cout<<"Ingrese la fecha de nacimiento : ";
	cin>>JAGC_an>>JAGC_mn>>JAGC_dn;
	if(JAGC_da>JAGC_dn){
		JAGC_d=JAGC_da-JAGC_dn;
	}else{
		JAGC_da=JAGC_da+30;
		JAGC_ma=JAGC_ma-1;
		JAGC_d=JAGC_da-JAGC_dn;
	}
	if(JAGC_ma>JAGC_mn){
		JAGC_m=JAGC_ma-JAGC_mn;
	}else{
		JAGC_ma=JAGC_ma+12;
		JAGC_aa=JAGC_aa-1;
		JAGC_m=JAGC_ma-JAGC_mn;
	}
	JAGC_a=JAGC_aa-JAGC_an;
	cout<<"Usted tiene "<<JAGC_a<<" años, "<<JAGC_m<<" meses, "<<JAGC_d<<" dias "<<endl;
	return 0;

}
