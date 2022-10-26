#include<iostream>
using namespace std;
int main()
{
	float RYMG_x,RYMG_s=0,RYMG_vb,RYMG_piva=12,RYMG_viva,RYMG_pdesc=10,RYMG_vdesc,RYMG_vn;
	int RYMG_i=0,RYMG_l;
	cout<<" ingrese RYMG_l :";
	cin>>RYMG_l;
	do{
		cout<<"ingrese RYMG_x :";
		cin>>RYMG_x;
		RYMG_i=RYMG_i+1;
		RYMG_s=RYMG_s+RYMG_x;
	}while(RYMG_i<RYMG_l);
	RYMG_vb=RYMG_s;
	RYMG_viva=RYMG_vb*RYMG_piva/100;
	RYMG_vdesc=RYMG_vb*RYMG_pdesc/100;
	RYMG_vn=RYMG_vb+RYMG_viva-RYMG_vdesc;
	cout<<"el valor a pagar es de :"<<RYMG_vn<<endl<<endl;
	return 0;
}

