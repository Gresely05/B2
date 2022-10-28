#include<iostream>
using namespace std;
int main()
{
	float DSEO_imc,DSEO_peso,DSEO_altura;
	cout<<"Ingrese el peso (kg) : ";
	cin>>DSEO_peso;
	cout<<"Ingrese la altura (metros) : ";
	cin>>DSEO_altura;
	DSEO_imc=DSEO_peso/(DSEO_altura*DSEO_altura);
	if(DSEO_imc<18.5){
		cout<<"Usted tiene bajo peso"<<endl;
	}if(DSEO_imc>=18.5 && DSEO_imc<24.9){
		cout<<"Usted tiene peso normal"<<endl;
	}if(DSEO_imc>=25 && DSEO_imc<26.9){
		cout<<"Usted tiene sobrepeso grado I"<<endl;
	}if(DSEO_imc>50){
		cout<<"Usted tiene obesidad tipo IV (Extrema)"<<endl;
	}
	return 0;

}
