#include<iostream>

using namespace std;

int main(){
	int n;
	int num=34;
	int vidas=5;
	do{
		cout<<"Vidas: "<<vidas;
		cout<<"\nIngrese el numero ";
		cin>>n;
		

		
		if(n>num){
			cout<<"Menos";
			vidas--;
		}else if(n<num && n!=0){
			cout<<"Mas";
			vidas--;
		}else if(n==num){
			cout<<"Ganaste!!";
		}
		
		cout<<"\n";
	}while(n!=num && n!=0 && vidas!=0);
	if(vidas==0)
	cout<<"Fin del juego, perdiste";
	return 0;
}
