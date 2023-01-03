#include <iostream>

using namespace std;

int main(){
	float vp;
	
	cout<<"Ingresar el valor a pagar: ";
	cin>>vp;
	
	if(vp>200){
		cout<<"Descuento del 20%";
	}else{
		cout<<"Descuenti del 10%";
	}
	
	
	return 0;
}
