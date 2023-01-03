#include <iostream>

using namespace std;

int main ()
 {
	float venta1, venta2, venta3, sueldob, res=0;
	cout<<"Ingrese primer venta: ";
	cin>>venta1;
	
	cout<<"Ingrese segunda venta: ";
	cin>>venta2;
	
	cout<<"Ingrese tercer venta: ";
	cin>>venta3;
	
	cout<<"Ingrese sueldo base: ";
	cin>>sueldob;

	res=(venta1+venta2+venta3)*0.10;
    res=sueldob;
    
    cout<<"El total es: "<<res;
    
    return 0;
}
	 
	 
	 
	 
	 
	 
	 

   
