#include<iostream>
using namespace std;
int main()
{
	int BDPC_aa,BDPC_ma,BDPC_da,RYG_an,BDPC_mn,BDPC_dn,BDPC_a,BDPC_m,BDPC_d;
	cout<<"ingrese la fecha actual :";
	cin>>BDPC_aa>>BDPC_ma>>BDPC_da;
	cout<<"ingrese la fecha de nacimiento :";
	cin>>BDPC_an>>BDPC_mn>>BDPC_dn;

	if(BDPC_da>BDPC_dn){
		RYG_d=BDPC_da-BDPC_dn;

	}else{
		BDPC_da=BDPC_da+30;
		BDPC_ma=BDPC_ma-1;
		BDPC_d=RYG_da-BDPC_dn;
	}
	if(BDPC_ma>BDPC_mn){
		BDPC_m=BDPC_ma-BDPC_mn;

	}else{
		BDPC_ma=BDPC_ma+12;
		BDPC_aa=BDPC_aa-1;
		BDPC_m=BDPC_ma-BDPC_mn;
	}
	BDPC_a=BDPC_aa-BDPC_an;
	cout<<"usted tiene "<<BDPC_a<<" años, "<<BDPC_m<<" meses, "<<BDPC_d<<" dias "<< endl;
	return 0;
}

