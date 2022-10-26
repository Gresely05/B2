#include<iostream>
using namespace std;
int main()
{
	float RYMG_imc,RYMG_peso,RYMG_altura;
	cout<<"ingrese el RYMG_peso (kg) :"; 
	cin>>RYMG_peso;
	cout<<"ingrese la RYMG_altura (metros) :";
	cin>>RYMG_altura;
	RYMG_imc=RYMG_peso/(RYMG_altura*RYMG_altura);
	if(RYMG_imc<18.5){

		cout<<"usted tiene bajo peso "<<endl;
	}
	if(RYMG_imc>=18.5 && RYMG_imc<24.9){

		cout<<"usted tiene peso normal "<<endl;
	}
	if(RYMG_imc>=25 && RYMG_imc<26.9){
		cout<<"usted tiene sobrepeso grado I "<<endl;
	}
	if(RYMG_imc>=27 && RYMG_imc<29.9){
		cout<<"usted tiene sobrepeso grado II "<<endl; 
	}
	if(RYMG_imc>=30 && RYMG_imc<34.9){
		cout<<"usted tiene obesidad de tipo I "<<endl;
	}
	if(RYMG_imc>=35 && RYMG_imc<39.9){
		cout<<"usted tiene obesidad de tipo II "<<endl;
	}
	if(RYMG_imc>=40 && RYMG_imc<49.9){
		cout<<"usted tiene obesidad de tipo III (morbida) "<<endl;
	}

	if(RYMG_imc>50){
		cout<<"usted tiene obesidad tipo iv (extrema) "<<endl;
	}
		return 0;
}
	

