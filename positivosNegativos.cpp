#include <iostream>

using namespace std;

int main(){
	
	int numeros, n, positivo = 0, negativo = 0, i;
	
	cout<<"Cuantos numeros vas a ingresar?: ";
	cin>>numeros;
	
	for(i = 1; i<=numeros; i++){
		
		cout<<"Ingresa un numero: ";
		cin>>n;
		
		if(n < 0){
			negativo = negativo + 1;
		}
		
		if(n > 0){
			positivo = positivo + 1;
		}
		
	}
	
	cout<<"Positivos: "<<positivo<<endl;
	cout<<"Negativos: "<<negativo<<endl;
	
	return 0;
	
	
}
