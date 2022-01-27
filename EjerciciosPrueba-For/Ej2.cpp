#include<iostream>
#include<stdlib.h>
#include<math.h>

using namespace std;

int main(){	
	int numeroactual=0;	//Representara el numero con el que estamos trabajando
	for(int i =1500; i <=1900;i++){	//Ciclo que recorre del 1500 al 1900
		numeroactual=i;	//Se asigna el número actual
		int n1 = numeroactual/100;	//Se hace una división entre 100, que hará que queden los primeros dos digitos y se asignan a un nuevo número
		int n2 = numeroactual%100;	//Lo que sobre de dividirlos serán los 2 digitos siguientes que formaran el tercer numero


		if(n2!=0){	//Con esta condición, evitamos nos muestre los casos en los que da 0
		
		int mult = n1*n2;	//Multiplicación de esos numeros
		int raiz = sqrt(mult);	//Obtenemos raíz cuadrada, al ser entero nos va a dar unicamente los valores enteros
		int comp=(raiz*raiz);	//Se multiplican las raices, esto es para saber si es raíz exacta, si si, entonces al multiplicarlos dara el mismo número
								//Si no da el mismo nímero, es porque no fue exacta
		
		if(comp==mult){	//Verificamos si la raiz fue exacta, esto es obtenido de la multiplicación anterior
		
		//Impresión de datos:
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
