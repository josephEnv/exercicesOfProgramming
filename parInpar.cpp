#include <iostream>

using namespace std;

int main(){
	
	int numeros, n, inpar = 0, par = 0, i;
	
	cout<<"Cuantos numeros vas a ingresar?: ";
	cin>>numeros;
	
	for(i = 1; i<=numeros; i++){
		
		cout<<"Ingresa un numero: ";
		cin>>n;
		
		if(n%2 == 0){
			par = par + 1;
		}
		
		if(n%2 == 1){
			inpar = inpar + 1;
		}
		
	}
	
	cout<<"par: "<<par<<endl;
	cout<<"inpar: "<<inpar<<endl;
	
	return 0;
	
	
}
