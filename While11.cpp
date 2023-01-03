//EJERCICIO #45
#include <iostream>

using namespace std;

int main(){
	
	int num, c=0, posit=0, neg=0, cant;
	
	cout<<"Ingrese la cantidad de numeros: ";
	cin>>cant;
	
	while(c<cant){
		
		cout<<"Ingrese un numero: ";
		cin>>num;
		
		if(num>=1){
			posit++;
		}else if(num<=-1){
			neg++;
		}
		
		c++;
	}
	
	cout<<"Positivos: "<<posit<<endl;;
	cout<<"Negativos: "<<neg<<endl;
	
	return 0;
}
