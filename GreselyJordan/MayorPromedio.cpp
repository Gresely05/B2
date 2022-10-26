#include<iostream>
using namespace std;
int main()
{
	float JAGC_x,JAGC_pm;
	int JAGC_i=0,JAGC_l;
	cout<<"Ingrese l: ";
	cin>>JAGC_l;
	do{
		cout<<"Ingrese x: ";
		cin>>JAGC_x;
		JAGC_i=JAGC_i+1;
		if(JAGC_x>JAGC_pm){
			JAGC_pm=JAGC_x;
		}
	}while(JAGC_i<JAGC_l);
	cout<<"El promedio maximo de el curso fue: "<<JAGC_pm<<endl<<endl;
	return 0;
}

