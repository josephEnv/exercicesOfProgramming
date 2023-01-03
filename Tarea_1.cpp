#include <iostream>
#include <math.h>

using namespace std;

int main(){
	float a, b, c, res;
	
	cout<<"ingresar el primer valor: ";
	cin>>a;
	
	cout<<"ingresar el segundo valor: ";
	cin>>b;
	
	cout<<"ingresar el tercer valor: ";
	cin>>c;
	
	res = pow(a, 2) + pow(b, 2) + pow(c, 2);
	
	cout<<"El resultado es: "<<res;
	
	return 0;
}
