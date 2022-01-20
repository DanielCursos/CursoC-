#include<iostream>

using namespace std;


int main(){
	string nombres[5]={"Jaime","javier","Jorge","Juan","Jair"};
	int edades[5]={23,35,18,14,50};
	bool valido=true;
	int pos;
	
	do{
	valido=true;
	cout<<"Ingresa posicion ";
	cin>>pos;
	
	if(pos>5 || pos<1){
		cout<<"\nPosicion fuera de rango (1-5)";
		valido=false;
	}
	}while(valido==false);
	
	cout<<"\nLos datos son:\n";
	cout<<"Nombre: "<<nombres[pos-1];
	cout<<"\nEdad: "<<edades[pos-1];
	

	return 0;
}
