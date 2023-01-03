#include <iostream>
#include <math.h>

using namespace std;

int main(){
	float a, b, c, val1, val2, res;
	
	cout<<"Ingresa el primer valor: ";
	cin>>a;
	
	cout<<"ingresa el segundo valor: ";
	cin>>b;
	
	cout<<"Ingresa el tercer valor: ";
	cin>>c;
	
	val1 = (a+b);
	val2 = (b+c);
	
	res = pow(val1, 2) - pow(val2, 2);
	
	cout<<"El resultado es: "<<res;
	
	return 0;
}
