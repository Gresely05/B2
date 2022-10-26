#include<iostream>
using namespace std;
int main()
{
	float RYMG_x,RYMG_pm=0;
	int RYMG_i=0,RYMG_l;
	cout<<"ingrese RYMG_l: ";
	cin>>RYMG_l;
	do{
		cout<<"ingrese RYMG_x: ";
		cin>>RYMG_x;
		RYMG_i=RYMG_i+1;
		if(RYMG_x>RYMG_pm){
			RYMG_pm=RYMG_x;
		}
	}while(RYMG_i<RYMG_l);
	cout<<"el promedio maximo de el curso fue :"<<RYMG_pm<<endl<<endl;
	return 0; 
}

