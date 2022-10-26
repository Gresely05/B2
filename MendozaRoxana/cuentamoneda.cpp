#include<iostream>
using namespace std;
int main()
{
	float RYMG_x,RYMG_s=0,RYMG_s1=0,RYMG_s5=0;
	int RYMG_i=0,RYMG_l,RYMG_i1=0,RYMG_i5=0;
	cout<<" ingrese RYMG_l :"; 
	cin>>RYMG_l;
	do{
		cout<<" ingrese RYMG_x :";
		cin>>RYMG_x;
		RYMG_i=RYMG_i+1;
		RYMG_s=RYMG_s+RYMG_x;
		if(RYMG_x==1){

			RYMG_i1=RYMG_i1+1;
			RYMG_s1=RYMG_s1+RYMG_x;
	

		
	}else{
		RYMG_i5=RYMG_i5+1;
		RYMG_s5=RYMG_s5+RYMG_x;
	}

}while(RYMG_i<RYMG_l);
cout<<" la cantidad de monedas fue :"<<RYMG_i<<endl;
cout<<"el valor en monedas fue :"<<RYMG_s<<endl;

cout<<"la cantidad de monedas ($1) fue :"<<RYMG_i1<<endl;
cout<<"el valor fue :"<<RYMG_s1<<endl;
cout<<"la cantidad de monedas .50 fue :"<<RYMG_i5<<endl;
cout<<"el valor fue :"<<RYMG_s5<<endl;
return 0;
}

