
 #include<iostream>
using namespace std;
int main()
{
	float HNJC_imc,HNJC_peso,HNJC_altura;
	cout<<"Ingrese el peso (kg) : ";
	cin>>HNJC_peso;
	cout<<"Ingrese la altura (metros) : ";
	cin>>HNJC_altura;
	HNJC_imc=HNJC_peso/(HNJC_altura*HNJC_altura);
	if(HNJC_imc<18.5){
		cout<<"Usted tiene bajo peso"<<endl;
	}if(HNJC_imc>=18.5 && HNJC_imc<24.9){
		cout<<"Usted tiene peso normal"<<endl;
	}if(HNJC_imc>=25 && HNJC_imc<26.9){
		cout<<"Usted tiene sobrepeso grado I"<<endl;
	}if(HNJC_imc>50){
		cout<<"Usted tiene obesidad tipo IV (Extrema)"<<endl;
	}
	return 0;

}


