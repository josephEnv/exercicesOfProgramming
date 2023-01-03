//EJERCICIO #54

#include <iostream>

using namespace std;

int main(){
	
	int num, n;
	
	cout<<"Ingresa el numero a adivinar: ";
	cin>>n;
	
	do {
		
		cout<<"Ingresa un numero: ";
		cin>>num;
		
	}while(num!=n);
	
	cout<<"Felicidades el numero era: "<<n<<endl;
	
	return 0;
	
	
}
