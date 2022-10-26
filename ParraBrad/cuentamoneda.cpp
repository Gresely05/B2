#include<iostream>
using namespace std;
int main()
{
	float BDPC_x,BDPC_s=0,BDPC_s1=0,BDPC_s5=0;
	int BDPC_i=0,BDPC_l,BDPC_i1=0,BDPC_i5=0;
	cout<<" ingrese BDPC_l :"; 
	cin>>BDPC_l;
	do{
		cout<<" ingrese BDPC_x :";
		cin>>BDPC_x;
		BDPC_i=BDPC_i+1;
		BDPC_s=BDPC_s+BDPC_x;
		if(BDPC_x==1){

			BDPC_i1=BDPC_i1+1;
			BDPC_s1=BDPC_s1+BDPC_x;
	

		
	}else{
		BDPC_i5=BDPC_i5+1;
		BDPC_s5=BDPC_s5+BDPC_x;
	}

}while(BDPC_i<BDPC_l);
cout<<" la cantidad de monedas fue :"<<BDPC_i<<endl;
cout<<"el valor en monedas fue :"<<BDPC_s<<endl;

cout<<"la cantidad de monedas ($1) fue :"<<BDPC_i1<<endl;
cout<<"el valor fue :"<<BDPC_s1<<endl;
cout<<"la cantidad de monedas .50 fue :"<<BDPC_i5<<endl;
cout<<"el valor fue :"<<BDPC_s5<<endl;
return 0;
}

