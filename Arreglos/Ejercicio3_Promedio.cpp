#include<iostream>

using namespace std;

int main(){
	int n;
	cout<<"Ingrese cantidad de numeros: ";
	cin>>n;
	
	int numeros[n];

	for(int i=0;i<n;i++){
		cout<<"Ingrese numero "<<i+1<<" ";
		cin>>numeros[i];
	}
	int suma=0;
	for(int i=0;i<n;i++){
		suma=suma+numeros[i];
	}
	
	float promedio= (float)suma/n;
	
	cout<<"El promedio es: "<<promedio;

	
	return 0;
}
