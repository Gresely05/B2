#include<iostream>
using namespace std;
int main()
{
	float BDPC_x,BDPC_pm=0;
	int BDPC_i=0,BDPC_l;
	cout<<"ingrese BDPC_l: ";
	cin>>BDPC_l;
	do{
		cout<<"ingrese BDPC_x: ";
		cin>>BDPC_x;
		BDPC_i=BDPC_i+1;
		if(BDPC_x>BDPC_pm){
			BDPC_pm=BDPC_x;
		}
	}while(BDPC_i<BDPC_l);
	cout<<"el promedio maximo de el curso fue :"<<BDPC_pm<<endl<<endl;
	return 0; 
}

