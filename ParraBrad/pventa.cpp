#include<iostream>
using namespace std;
int main()
{
	float BDPC_x,BDPC_s=0,BDPC_vb,BDPC_piva=12,BDPC_viva,BDPC_pdesc=10,BDPC_vdesc,BDPC_vn;
	int BDPC_i=0,BDPC_l;
	cout<<" ingrese BDPC_l :";
	cin>>BDPC_l;
	do{
		cout<<"ingrese BDPC_x :";
		cin>>BDPC_x;
		BDPC_i=BDPC_i+1;
		BDPC_s=BDPC_s+BDPC_x;
	}while(BDPC_i<BDPC_l);
	BDPC_vb=BDPC_s;
	BDPC_viva=BDPC_vb*BDPC_piva/100;
	BDPC_vdesc=BDPC_vb*BDPC_pdesc/100;
	BDPC_vn=BDPC_vb+BDPC_viva-BDPC_vdesc;
	cout<<"el valor a pagar es de :"<<BDPC_vn<<endl<<endl;
	return 0;
}

