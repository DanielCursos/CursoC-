#include<iostream>

using namespace std;

void llenar();
void mostrar();
void cambiar();
bool resultado();

int matriz[3][3];


int main(){
	llenar();
	mostrar();
	cambiar();
	mostrar();
	
	if(resultado()){
		cout<<"\nGanaste";
	}else{
		cout<<"\n NO Ganaste";
	}
	
	return 0;
}

void llenar(){
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<"Ingresa el valor de ["<<i<<"]["<<j<<"]";
			cin>>matriz[i][j];
		}		
	}
 
}

void mostrar(){
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<matriz[i][j]<<" ";
		}		
		cout<<"\n";
	}	
}

void cambiar(){
	int posi=0;
	int posj=0;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
		if(matriz[i][j]==8){
			posi = i;
			posj= j;
		}
		}		
		cout<<"\n";
	}
	//5
	//8 5
	int aux=matriz[posi][posj];
	matriz[posi][posj]=matriz[posi-1][posj];
	matriz[posi-1][posj] = aux;
}

bool resultado(){
	bool ganaste=true;
int cuadro[3][3]={{2,3,1},{5,4,6},{7,0,8}};
int resultado[3][3]={{1,2,3},{4,5,6},{7,8,0}};

for(int i=0;i<3;i++){
	for(int j=0;j<3;j++){
		if(cuadro[i][j]!=resultado[i][j]){
			ganaste=false;
			
		}
		
	}
	
}


return ganaste;
	
}
