#include<iostream>
using namespace std;
int main()
{
	float DSEO_x,DSEO_pm;
	int DSEO_i=0,DSEO_l;
	cout<<"Ingrese l: ";
	cin>>DSEO_l;
	do{
		cout<<"Ingrese x: ";
		cin>>DSEO_x;
		DSEO_i=DSEO_i+1;
		if(DSEO_x>DSEO_pm){
			DSEO_pm=DSEO_x;
		}
	}while(DSEO_i<DSEO_l);
	cout<<"El promedio maximo de el curso fue: "<<DSEO_pm<<endl<<endl;
	return 0;
}
