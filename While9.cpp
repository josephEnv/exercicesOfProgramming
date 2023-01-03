#include <iostream>

using namespace std;


int main(){

	int num;
	string cond;
	
	do {
		
		cout<<"ingresa un numero: ";
		cin>>num;
		
		cout<<"desea ingresar de nuevo al ciclo?: ";
		cin>>cond;
		
	}while(cond == "yes");
	
	return 0;
}
