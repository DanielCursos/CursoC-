#include<iostream>
#include<fstream>

using namespace std;

void menu();
void agregarPlatillo();
void mostrarMenu();

int main(){
	 menu();
	return 0;
}

void menu(){
	int opc;
	do{
		cout<<"1.- Agregar platillo\n";
		cout<<"2.- Mostrar Menu\n";
		cout<<"3.- Ordenar\n";
		cout<<"4.- Salir\n";
		cin>>opc;
		
		switch(opc){
			case 1:{
				agregarPlatillo();
				break;
			}
			case 2:{
				mostrarMenu();
				break;
			}
			case 3:{
				
				break;
			}
			
			
		}
		
	}while(opc!=4);
	
	
}

void agregarPlatillo(){
	ofstream archivo;

	
	archivo.open("menu.txt",ios::app);
	
	if(archivo.fail()){
		cout<<"Error al abrir archivo";
	}else{
		string nombre;
		cout<<"Ingrese el nombre del platillo ";
		cin.ignore();
		getline(cin,nombre);
		
		float precio;
		cout<<"Ingrese el precio del platillo ";
		cin>>precio;
		
		archivo<<nombre<<" "<<precio;
		archivo<<"\n";
	}
	archivo.close();	
}
//sopa 12.14

void mostrarMenu(){
	ifstream entrada;
	entrada.open("menu.txt",ios::in);
	if(entrada.fail()){
		cout<<"Ocurrio un error";
	}else{
		while(!entrada.eof()){
			string texto;
			getline(entrada,texto);
			cout<<texto;
			cout<<"\n";
		}		
		
	}
	entrada.close();
}
