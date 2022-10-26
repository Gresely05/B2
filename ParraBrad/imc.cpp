#include<iostream>
using namespace std;
int main()
{
	float BDPC_imc,BDPC_peso,BDPC_altura;
	cout<<"ingrese el BDPC_peso (kg) :"; 
	cin>>BDPC_peso;
	cout<<"ingrese la BDPC_altura (metros) :";
	cin>>BDPC_altura;
	BDPC_imc=BDPC_peso/(BDPC_altura*BDPC_altura);
	if(BDPC_imc<18.5){

		cout<<"usted tiene bajo peso "<<endl;
	}
	if(BDPC_imc>=18.5 && BDPC_imc<24.9){

		cout<<"usted tiene peso normal "<<endl;
	}
	if(BDPC_imc>=25 && BDPC_imc<26.9){
		cout<<"usted tiene sobrepeso grado I "<<endl;
	}
	if(BDPC_imc>=27 && BDPC_imc<29.9){
		cout<<"usted tiene sobrepeso grado II "<<endl; 
	}
	if(BDPC_imc>=30 && BDPC_imc<34.9){
		cout<<"usted tiene obesidad de tipo I "<<endl;
	}
	if(BDPC_imc>=35 && BDPC_imc<39.9){
		cout<<"usted tiene obesidad de tipo II "<<endl;
	}
	if(BDPC_imc>=40 && BDPC_imc<49.9){
		cout<<"usted tiene obesidad de tipo III (morbida) "<<endl;
	}

	if(BDPC_imc>50){
		cout<<"usted tiene obesidad tipo iv (extrema) "<<endl;
	}
		return 0;
}
	

