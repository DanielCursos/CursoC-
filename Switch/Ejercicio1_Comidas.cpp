#include<iostream>

using namespace std;

int main(){
	int opcion=0;
	cout<<"Ordene:\n";
	cout<<"1. Sopa\n";
	cout<<"2. Pastas\n";
	cout<<"3. Bebidas\n";
	cout<<"4. Postre\n";
	cin>>opcion;
	
	switch(opcion){
		case 1:{
			cout<<"Ordeno sopa";
			break;
		}
		case 2:{
			cout<<"Ordeno pasta";
			break;
		}
		case 3:{
			cout<<"Ordeno bebidas";
			break;
		}case 4:{
			cout<<"Ordeno postre";
			break;
		}
	}
	
	return 0;
}
