#include<iostream>

using namespace std;

int main(){
	int tabla;
	int n;
	cout<<"Ingrese la tabla: ";
	cin>>tabla;
	cout<<"Ingrese hasta que numero: ";
	cin>>n;
	cout<<"\n";
	int resultado;
	for(int i=0;i<=n;i++){
		resultado=tabla*i;
		cout<<tabla<<"*"<<i<<"="<<resultado;
		cout<<"\n";
	}
	return 0;
}

