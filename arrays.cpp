#include <iostream>

using namespace std;


int mcm(int n){
	int nums;
	
	for(int i = 1; i<=n; i++){
		cout<<"ingrese un numero: ";
		cin>>nums;
	}
	
}

int main(){
	
	int cant;
	
	cout<<"Cuantas numeros vas a ingresar?: ";
	cin>>cant;
	
	int res = mcm(cant);
	return 0;
	
}
