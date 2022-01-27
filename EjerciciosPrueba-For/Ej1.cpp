#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int numeroactual=0;
	
	for(int i =2; i <10000;i++){	//Se recorre del 2 al 100000
		numeroactual=i;
		int numeros[numeroactual];	//Se declara un arreglo en el que se almacenaran los divisores
		int totaln=0;	//sera el total de divisores
		int suma=0;	//La suma
		int x=0;	//Indice usado para el arreglo números
		
		for(int j=1;j<numeroactual;j++){//Se hace un recorrido de números empezando en 1 hasta el número actual
			if(numeroactual%j==0){	//Se verifica si es divisor, para ello el residuo debe dar 0
				numeros[x]=j;	//Se guarda en números el numero divisor
				suma+=j;	//Se empieza con la suma
				totaln++; //Se aumentan los indices
				x++;
			}
		}
		if(suma==numeroactual){	//Si la suma es igual al numero actual
		
		//Impresión de resultados.
		cout<<numeroactual<<" ";	
		for(int j=0;j<totaln;j++){
			cout<<numeros[j];
			if((j+1)!=totaln){	//Si hay un número mas adelante se coloca un +
				cout<<"+";
			}
		}
		cout<<"="<<suma<<"\n";
	}
	}
}
