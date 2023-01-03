#include <iostream>

using namespace std;

int main(){
	float a, b, c, d, res;
	
	cout<<"ingrese el valor de a: ";
	cin>>a;
	
	cout<<"ingrese el valor de b: ";
	cin>>b;
	
	cout<<"ingrese el valor de c: ";
	cin>>c;
	
	cout<<"ingrese el valor de d: ";
	cin>>d;
	
	res = (a/b) + (c/d);
	
	cout<<"El resultado es: "<<res;
	
	return 0;
}
