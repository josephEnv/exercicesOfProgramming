//EJERCICIO #46

#include <iostream>

using namespace std;

int main(){
	
	int cant, num, c=0, par=0, imp=0;
	
	cout<<"Ingrese la cantidad de numeros: ";
	cin>>cant;
	
	while(c<cant){
		
		cout<<"Ingresa un numero: ";
		cin>>num;
		
		if(num%2==0){
			par++;
		}else if(num%2!=0){
			imp++;
		}
		
		c++;
		
	}
	
	cout<<"Pares: "<<par<<endl;
	cout<<"Impares: "<<imp;
	
	return 0;
}
