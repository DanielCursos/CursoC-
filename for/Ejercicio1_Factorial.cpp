#include<iostream>

using namespace std;

int main(){
	int numero;
	
	
	
	cout<<"Ingrese numero. ";
	cin>>numero;
	
	int resultado=1;
	for(int i=1;i<=numero;i++){
		resultado=resultado*i;
	}
	
	cout<<"\n Resultado: "<<resultado;
	
	
	
	return 0;
}


