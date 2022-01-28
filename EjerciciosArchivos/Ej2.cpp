#include<iostream>
#include<fstream>

using namespace std;

void llenar();
void guardarMatriz();

int matriz[3][3];
int main(){
	llenar();
	guardarMatriz();
	
	return 0;
}

void llenar(){
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<"Ingrese valor de la posicion ["<<i<<"]["<<j<<"] ";
			cin>>matriz[i][j];					
		}		
	}
	
}

void guardarMatriz(){
	ofstream archivo;
	archivo.open("matrices.txt",ios::app);
	if(archivo.fail()){
		exit(1);
	}
	
	archivo<<"Matriz\n";
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			archivo<<"["<<matriz[i][j]<<"] ";
		}		
		archivo<<"\n";
	}
	cout<<"\nSe guardo correctamente";
	archivo.close();
}

