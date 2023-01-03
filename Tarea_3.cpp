#include <iostream>
#include <math.h>

using namespace std;

int main(){
	float a, b, c, res;
	
	cout<<"Ingrese el primer valor: ";
	cin>>a;
	
	cout<<"Ingrese el segundo valor: ";
	cin>>b;
	
	cout<<"Ingrese el tercer valor: ";
	cin>>c;
	
	res = sqrt(a+b) - pow(c, 3);
	
	cout<<"El resultado es: "<<res;
	
	return 0;
}
