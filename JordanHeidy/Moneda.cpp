
#include<iostream>
using namespace std;
int main()
{
	float HNJC_x,HNJC_s=0,HNJC_s1=0,HNJC_s5=0;
	int HNJC_i=0,HNJC_l,HNJC_i1=0,HNJC_i5=0;
	cout<<" ingrese HNJC_l :";
	cin>>HNJC_l;
	do{
		cout<<" ingrese HNJC_x :";
		cin>>HNJC_x;
		HNJC_i=HNJC_i+1;
		HNJC_s=HNJC_s+HNJC_x;
		if(HNJC_x==1){

			HNJC_i1=HNJC_i1+1;
			HNJC_s1=HNJC_s1+HNJC_x;



	}else{
		HNJC_i5=HNJC_i5+1;
		HNJC_s5=HNJC_s5+HNJC_x;
	}

}while(HNJC_i<HNJC_l);
cout<<" la cantidad de monedas fue :"<<HNJC_i<<endl;
cout<<"el valor en monedas fue :"<<HNJC_s<<endl;

cout<<"la cantidad de monedas ($1) fue :"<<HNJC_i1<<endl;
cout<<"el valor fue :"<<HNJC_s1<<endl;
cout<<"la cantidad de monedas .50 fue :"<<HNJC_i5<<endl;
cout<<"el valor fue :"<<HNJC_s5<<endl;
return 0;

}
