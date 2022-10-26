#include<iostream>
using namespace std;
int main()
{
	float JAGC_x,JAGC_s=0,JAGC_s1=0,JAGC_s5=0;
	int JAGC_i=0,JAGC_l,JAGC_i1=0,JAGC_i5=0;
	cout<<"Ingrese l: ";
	cin>>JAGC_l;
	do{
		cout<<"Ingrese x : ";
		cin>>JAGC_x;
		JAGC_i=JAGC_i+1;
		JAGC_s=JAGC_s+JAGC_x;
		if(JAGC_x==1){
			JAGC_i1=JAGC_i1+1;
			JAGC_s1=JAGC_s1+JAGC_x;

		}else{
			JAGC_i5=JAGC_i5+1;
			JAGC_s5=JAGC_s5+JAGC_x;
		}

	}while(JAGC_i<JAGC_l);
	cout<<"La cantidad de monedas fue : "<<JAGC_i<<endl;
	cout<<"El valor fue: "<<JAGC_s<<endl;

	cout<<"La cantidad de monedas s1 fue : "<<JAGC_i1<<endl;
	cout<<"El valor fue : "<<JAGC_s1<<endl;

	cout<<"La cantidad de monedas .5
	cout<<"El valor fue : "<<JAGC_s5<<endl;
	return 0;

}
