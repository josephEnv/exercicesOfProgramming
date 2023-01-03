#include <iostream>

using namespace std;

int main() {
	
	int n, i, numeros, con, contador = 0;

	cout<<"Cuantos numero va a ingresar: ";
	cin>>n;
	
	for(i = 1; i<=n; i++){
		cout<<"Ingresa un numero: ";
		cin>>numeros;
		
		if(numeros < 0){
			contador = contador + 1;
			if(n == i){
				cout<<contador<<" Numeros son negativos"<<endl;	
			}
		}else if(numeros > 0){
			contador = contador + 1;
			if(n == i) {	
				cout<<contador<<" Numeros son positivos"<<endl;
			}
		}
	}
	
}
