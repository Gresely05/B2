#include<iostream>
using namespace std;
int main()
{
	float JAGC_imc,JAGC_peso,JAGC_altura;
	cout<<"Ingrese el peso (kg) : ";
	cin>>JAGC_peso;
	cout<<"Ingrese la altura (metros) : ";
	cin>>JAGC_altura;
	JAGC_imc=JAGC_peso/(JAGC_altura*JAGC_altura);
	if(JAGC_imc<18.5){
		cout<<"Usted tiene bajo peso"<<endl;
	}if(JAGC_imc>=18.5 && JAGC_imc<24.9){
		cout<<"Usted tiene peso normal"<<endl;
	}if(JAGC_imc>=25 && JAGC_imc<26.9){
		cout<<"Usted tiene sobrepeso grado I"<<endl;
	}if(JAGC_imc>50){
		cout<<"Usted tiene obesidad tipo IV (Extrema)"<<endl;
	}
	return 0;

}
