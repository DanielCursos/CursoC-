#include<iostream>

using namespace std;

int main(){
	int edad=0;
	cout<<"Ingrese la edad: ";
	cin>>edad;
	cout<<"\n";
	
	if(edad>=0 && edad<=3){
		cout<<"Bebe";
	}else if(edad>=4 && edad<=12){
		cout<<"Ninio";
	}else if(edad>=13 && edad<21){
		cout<<"Adolescente";
	}else if(edad>=21){
		cout<<"Adulto";
	}else{
		cout<<"Momia";
	}
	
	
	
	return 0;
}
