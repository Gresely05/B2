#include<iostream>
using namespace std;
int main()
{
	float RYMMG_x,RYMMG_pm=0;
	int RYMMG_i=0,RYMMG_l;
	cout<<"ingrese RYMMG_l: ";
	cin>>RYMMG_l;
	do{
		cout<<"ingrese RYMMG_x: ";
		cin>>RYMMG_x;
		RYMMG_i=RYMMG_i+1;
		if(RYMMG_x>RYMMG_pm){
			RYMMG_pm=RYMMG_x;
		}
	}while(RYMMG_i<RYMMG_l);
	cout<<"el promedio maximo de el curso fue :"<<RYMMG_pm<<endl<<endl;
	return 0; 
}

