#include<iostream>
#include<stdlib.h>
#include<time.h>	//Libreria necesaria para generar aleatorios

using namespace std;

int main(){
	srand(time(NULL));	//Función de aleatorios
	int n=0;
	cout<<"Ingrese numero de casas...  ";
	cin>>n;	//Pedimos el número de casas
	
	int casas[n];	//Se genera un arreglo casas de tamaño n (numero de casas)

	for(int i=0; i<n;i++){	//Se recorre todo el arreglo casas
		casas[i]=(1+rand()%10);	//Se le asigna el valor aleatorio
		cout<<"Casa "<<i<<" habitantes: "<<casas[i]<<"\n"	;	//Se imprimer la información
	}
	
	//Obteniendo la casa con mayor numero de personas
	int mayor=0;
	
	int casam=0;
	int casasmayor[n];//Este arreglo nos ayuda para casos en los que haya mas de una casa con el maximo número de personas
					  //Se establece de tamaño n porque no se sabe cuantas casas puede haber con el maximo, y n es el máximo posible.
					  
	int contm=0; //Variable que nos dira cuantas casas tienen el mayor numero de personas
	int j=0;//Nos permite movernos en el arreglo casasmayor
	
	//Se calcula el mayor numero de habitantes
	for(int i=0; i<n;i++){
		
		if(casas[i]>=mayor){	//Si el numero de habitantes es mayor 						
			if(casas[i]==mayor){			
			casasmayor[j]=i;
			j++;
			contm++;	
		}else if(casas[i]>mayor){
			j=0;
			contm=1;
			casasmayor[j]=i;
			j++;
			
		}
			//Se guarda la posicion de la casa, para saber a que casa pertenece
			mayor=casas[i];	//Se asigna el nuevo valor mayor
		}		
	}

	//Impresión de resultados
	if(contm>1){	//Si hay más de una casa con el mayor numero de habitantes
		cout<<"Las casas con el mayor numero de habitantes son";
	for(int i=0; i<contm;i++){	
	cout<<"\nLa casa "<<casasmayor[i];	
	}
	cout<<"\nCon "<<mayor<<" numero de habitantes";
}else{	//Si solo hay una casa
	cout<<"\nLa casa "<<casasmayor[0]<<" es la casa con mayor numero de habitantes con "<<mayor;
}
	//Obtención de los grupos
	int cont13=0;	//Contador para habitantes entre 1-3
	int cont46=0;	//Contador para habitantes entre 4-6
	int contm7=0;	//Contador para habitantes mayores a 7
	
	
	for(int i=0;i<n;i++){	//Se recorren las casas
		if(casas[i]<=3){	//Condiciones para cada casa
			cont13++;
		}else if(casas[i]>3 && casas[i]<7){
			cont46++;
		}else{
			contm7++;
		}
	}
	
	//Impresión de resultados
	cout<<"\n\nEn "<<cont13<<" casas hay entre 1 a 3 personas.";
	cout<<"\nEn "<<cont46<<" casas hay entre 4 a 6 personas.";
	cout<<"\nEn "<<contm7<<" casas hay 7 personas o mas.";
	
	
	
	return 0;
}
