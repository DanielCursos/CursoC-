#include<iostream>
#include<math.h>
#include<stdlib.h>
using namespace std;


int main(){
	int opc;
	do{	
	system("cls");
	cout<<"Ingrese opcion:\n";
	cout<<"1. Suma\n";
	cout<<"2. Resta\n";
	cout<<"3. Multiplicacion\n";
	cout<<"4. Division\n";
	cout<<"5. Raiz cuadrada\n";
	cout<<"6. Elevacion a la n\n";
	cout<<"7. Formula general\n";
	cout<<"8. Salir\n";
	cin>>opc;
	
	switch(opc){
		case 1:{
			int n1, n2;
			cout<<"Ingrese numero 1: ";
			cin>>n1;
			cout<<"Ingrese numero 2: ";
			cin>>n2;
			
			int resultado= n1+n2;
			cout<<"El resultado es: "<<resultado;
			break;
		}
		case 2:{
				int n1, n2;
			cout<<"Ingrese numero 1: ";
			cin>>n1;
			cout<<"Ingrese numero 2: ";
			cin>>n2;
			
			int resultado= n1-n2;
			cout<<"El resultado es: "<<resultado;
			break;
		}
		case 3:{
				int n1, n2;
			cout<<"Ingrese numero 1: ";
			cin>>n1;
			cout<<"Ingrese numero 2: ";
			cin>>n2;
			
			int resultado= n1*n2;
			cout<<"El resultado es: "<<resultado;
			break;
		}
		case 4:{
			int n1, n2;
			cout<<"Ingrese numero 1: ";
			cin>>n1;
			cout<<"Ingrese numero 2: ";
			cin>>n2;
			if(n2!=0){			
				float resultado= n1/n2;
				cout<<"El resultado es: "<<resultado;
			}else{
				cout<<"No es posible dividir entre 0";
			}
			break;
		}
		case 5:{
			int numero;
			cout<<"Ingrese numero. ";
			cin>>numero;
			
			float resultado=sqrt(numero);
			cout<<"El resultado es "<<resultado;
			
			break;
		}
		case 6:{
			int n1, elevacion;
			cout<<"Ingrese el numero: ";
			cin>>n1;
			cout<<"Elevado a la: ";
			cin>>elevacion;
			
			int resultado=pow(n1,elevacion);
			cout<<"El resultado es "<<resultado;
			break;
		}
		case 7:{
				float a =0;
				float b =0;
				float c=0;
				cout<<"Ingrese A\t";
				cin>>a;
				cout<<"Ingrese B\t";
				cin>>b;
				cout<<"Ingrese c\t";
				cin>>c;
	
				float resultado=((-b)+sqrt((pow(b,2)-(4*(a*c)))))/(2*a);
				float resultado2=((-b)-sqrt((pow(b,2)-(4*(a*c)))))/(2*a);
	
				cout<<"\n\n";
				cout<<"Resultado 1: "<<resultado;
				cout<<"\nResultado 2: "<<resultado2;
			break;
		}
		case 8:{
			cout<<"\nAdios\n";
			break;
		}
		default:{
			cout<<"Opcion invalida";
			break;
		}
	}
	cout<<"\n";
	system("pause");
	}while(opc!=8);
	return 0;
}
