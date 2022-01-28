#include<iostream>
#include<fstream>

using namespace std;

void escribir();
void leer();

int main(){
//	escribir();
	cout<<"\nLectura\n";
	leer();
	return 0;
}

void escribir(){
	ofstream archivo;
	string nombre;
	cout<<"Ingrese el nombre del archivo ";
	getline(cin,nombre);
	
	archivo.open(nombre.c_str(),ios::app);
	
	if(archivo.fail()){
		cout<<"Error al abrir archivo";
	}else{
		string texto;
		cout<<"Ingresa el texto\n";
		getline(cin,texto);
		archivo<<texto;		
		cout<<"Se escribio en el archivo";
		archivo<<"\n";
	}
	archivo.close();	
}


void leer(){
	ifstream entrada;
	entrada.open("texto2.txt",ios::in);
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
