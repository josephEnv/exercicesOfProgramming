#include <iostream>

using namespace std;

int main(){
	float vp;
	
	cout<<"Ingresar el valor a pagar: ";
	cin>>vp;
	
	if(vp>200){
		float des = vp*0.20;
		float tot = vp - des;
		cout<<"Descuento del 20% y el total al pagar es: "<<tot;
	}else{
		float des = vp*0.10;
		float tot = vp - des;
		cout<<"Descuento del 10% "<<des<<" y el total a pagar es: "<<tot;
	}
	
	
	return 0;
}
