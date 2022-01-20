#include<iostream>

using namespace std;

int main(){
	int numero;
	char opcion;
	
	do{	
	cout<<"Ingrese numero. ";
	cin>>numero;
	
	int resultado=1;
	for(int i=1;i<=numero;i++){
		resultado=resultado*i;
	}
	
	cout<<"\n Resultado: "<<resultado;
	
	bool valido=true;
	do{	
	valido=true;
	cout<<"\n Quiere seguir usando el programa? (s/n)... ";
	cin>>opcion;
	if(opcion != 's' && opcion!='n'){
		cout<<"\nOpcion invalida unicamente s o n\n";
		valido=false;
	}
	}while(valido==false);
	
}while(opcion!='n');
	
	return 0;
}


