#include<iostream>
using namespace std;
int main()
{
	float JAGC_x,JAGC_s=0,JAGC_vb,JAGC_piva=12,JAGC_viva,JAGC_pdesc=10,JAGC_vdesc,JAGC_vn;
	int JAGC_i=0,JAGC_l;
	cout<<"Ingrese l: ";
	cin>>JAGC_l;
	do{
		cout<<"Ingrese x: ";
		cin>>JAGC_x;
		JAGC_i=JAGC_i+1;
		JAGC_s=JAGC_s+JAGC_x; 
	}while(JAGC_i<JAGC_l);
	JAGC_vb=JAGC_s;
	JAGC_viva=JAGC_vb*JAGC_piva/100;
	JAGC_vdesc=JAGC_vb*JAGC_pdesc/100;
	JAGC_vn=JAGC_vb+JAGC_viva-JAGC_vdesc;
	cout<<"El valor a pagar es de: "<<JAGC_vn<<endl;
	return 0;
	
}
