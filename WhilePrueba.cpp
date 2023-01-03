#include <iostream>

using namespace std;

int main(){
	int prods, c=0;
	double cant, prec, total;
	
	string detalle;
	
	cout<<"Cuantos productos va a ingresar?: ";
	cin>>prods;
	
	while(c<=prods){
		
		cout<<""<<endl;
		
		cout<<"Ingresar un producto: ";
		cin>>detalle;
		
		cout<<"Ingresa una cantidad: ";
		cin>>cant;
		
		cout<<"Ingresa el precio del producto: ";
		cin>>prec;
		
		cout<<""<<endl;
		
		total = cant*prec;
		
		cout<<"El total a pagar de "<<detalle<<" es: "<<total<<endl;
		
		c++;
		
	}
	
	return 0;
}
