#include <iostream>

using namespace std;

int main(){
	int numero, n1, n2;
	float res;
	
	cout<<"Ingrese un numero: ";
	cin>>n1;
			
	cout<<"Ingresa otro numero: ";
	cin>>n2;
	
	cout<<""<<endl;
	
	cout<<"[1] Suma"<<endl;
	cout<<"[2] Resta"<<endl;
	cout<<"[3] Multiplicacion"<<endl;
	cout<<"[4] Division"<<endl;
	
	cout<<""<<endl;

	
	cout<<"Que quieres hacer con estos numeros de acuerdo a la guia: ";
	cin>>numero;
	
	cout<<""<<endl;
	
	switch(numero){
		case 1:
			res = n1 + n2;
			cout<<"El resultado de la suma es: "<<res;
		break;
		case 2:
			res = n1 - n2;
			cout<<"El resutado de la resta es: "<<res;
		break;
		case 3:
			res = n1 * n2;
			cout<<"El resultado de la multiplicacion es: "<<res;
		break;
		case 4:
			res = n1 / n2;
			cout<<"El resultado de la division es: "<<res;
		break;
		
		default:
			cout<<"Operacion no reconocida";
		break;
	}
	
	return 0;
}
