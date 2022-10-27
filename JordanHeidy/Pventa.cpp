
#include<iostream>
using namespace std;
int main()
{
	float HNJC_x,HNJC_s=0,HNJC_vb,HNJC_piva=12,HNJC_viva,HNJC_pdesc=10,HNJC_vdesc,HNJC_vn;
	int HNJC_i=0,HNJC_l;
	cout<<"Ingrese l: ";
	cin>>HNJC_l;
	do{
		cout<<"Ingrese x: ";
		cin>>HNJC_x;
		HNJC_i=HNJC_i+1;
		HNJC_s=HNJC_s+HNJC_x;
	}while(HNJC_i<HNJC_l);
	HNJC_vb=HNJC_s;
	HNJC_viva=HNJC_vb*HNJC_piva/100;
	HNJC_vdesc=HNJC_vb*HNJC_pdesc/100;
	HNJC_vn=HNJC_vb+HNJC_viva-HNJC_vdesc;
	cout<<"El valor a pagar es de: "<<HNJC_vn<<endl;
	return 0;

}


