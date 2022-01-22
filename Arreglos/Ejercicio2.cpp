#include<iostream>

using namespace std;

int main(){
	int numeros[10];
	for(int i=0;i<10;i++){
		cout<<"Ingrese numero "<<i+1<<" ";
		cin>>numeros[i];
	}
	
	cout<<"\n\nPares:\n";
	
	
	for(int i=0;i<10;i++){
		if(numeros[i]%2 == 0){
			cout<<numeros[i]<<" es par. \n";
		}
	}
	
	cout<<"\n\nImpares:\n";
	
	for(int i=0;i<10;i++){
		if(numeros[i]%2 != 0){
			cout<<numeros[i]<<" es impar. \n";
		}
	}
	
	
	return 0;
}
