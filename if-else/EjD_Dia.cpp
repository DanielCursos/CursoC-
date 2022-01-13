#include<iostream>

using namespace std;

int main(){
	int numero;
	cout<<"Ingresa el numero del dia... ";
	cin>>numero;
	
	if(numero==1){
		cout<<"Es lunes";
	}else if(numero==2){
		cout<<"Es martes";
	}else if(numero==3){
		cout<<"Es miercoles";
	}else if(numero==4){
		cout<<"Es jueves";
	}else if(numero==5){
		cout<<"Es viernes";
	}else if(numero==6){
		cout<<"Es sabado";
	}else if(numero==7){
		cout<<"Es domingo";
	}else{
		cout<<"Numero invalido";
	}
	
	return 0;
}
