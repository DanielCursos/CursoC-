#include<iostream>
#include<stdlib.h>
#include<math.h>

using namespace std;

int main(){	
	int numeroactual=0;	//Representara el numero con el que estamos trabajando
	for(int i =1500; i <=1900;i++){	//Ciclo que recorre del 1500 al 1900
		numeroactual=i;	//Se asigna el n�mero actual
		int n1 = numeroactual/100;	//Se hace una divisi�n entre 100, que har� que queden los primeros dos digitos y se asignan a un nuevo n�mero
		int n2 = numeroactual%100;	//Lo que sobre de dividirlos ser�n los 2 digitos siguientes que formaran el tercer numero


		if(n2!=0){	//Con esta condici�n, evitamos nos muestre los casos en los que da 0
		
		int mult = n1*n2;	//Multiplicaci�n de esos numeros
		int raiz = sqrt(mult);	//Obtenemos ra�z cuadrada, al ser entero nos va a dar unicamente los valores enteros
		int comp=(raiz*raiz);	//Se multiplican las raices, esto es para saber si es ra�z exacta, si si, entonces al multiplicarlos dara el mismo n�mero
								//Si no da el mismo n�mero, es porque no fue exacta
		
		if(comp==mult){	//Verificamos si la raiz fue exacta, esto es obtenido de la multiplicaci�n anterior
		
		//Impresi�n de datos:
		cout<<"n= "<<numeroactual;	
		cout<<", "<<n1;
		cout<<"*"<<n2;
		cout<<"="<<mult;
		cout<<", su raiz es "<<raiz<<"\n";
	}
	}
		
	}
	
	return 0;
}
