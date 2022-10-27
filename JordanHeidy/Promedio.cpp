
#include<iostream>
using namespace std;
int main()
{
	float HNJC_x,HNJC_pm;
	int HNJC_i=0,HNJC_l;
	cout<<"Ingrese l: ";
	cin>>HNJC_l;
	do{
		cout<<"Ingrese x: ";
		cin>>HNJC_x;
		HNJC_i=HNJC_i+1;
		if(HNJC_x>HNJC_pm){
			HNJC_pm=HNJC_x;
		}
	}while(HNJC_i<HNJC_l);
	cout<<"El promedio maximo de el curso fue: "<<HNJC_pm<<endl<<endl;
	return 0;

}
