//EJERCICIO 44

#include <iostream>

using namespace std;

int main(){
	
	int c=1, n, facto;
	
	cout<<"ingrese un numero: ";
	cin>>n;
	facto = 1;
	
	while(c<n){
		c+=1;
		
		facto = facto * c;
		
	}
	
	cout<<"El factorial es: "<<facto;;
	
}
