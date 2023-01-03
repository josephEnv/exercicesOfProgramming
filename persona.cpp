#include <iostream>

using namespace std;

int main(){
	int edad, altura;
	float peso;
	char sexo, nombre[25], Apellido[25];
	
	cout<<"ingresa tu nombre: ";
	cin>>nombre;
	
	cout<<"ingresa tu apellido: ";
	cin>>Apellido;
	
	cout<<"ingresa tu sexo: ";
	cin>>sexo;
	
	cout<<"ingresa tu peso: ";
	cin>>peso;
	
	cout<<"ingresa tu altura: ";
	cin>>altura;
	
	cout<<"ingresa tu edad: ";
	cin>>edad;
	
	cout<<"//////////////////////////////////////////////////////////////////////"<<endl;
	
	cout<<"tu nombre es: "<<nombre<<endl;
	cout<<"tu apellido es: "<<Apellido<<endl;
	cout<<"tu sexo es: "<<sexo<<endl;
	cout<<"tu peso es: "<<peso<<endl;
	cout<<"tu altura es: "<<altura<<endl;
	cout<<"tu edad es: "<<edad<<endl;
	
	return 0;
}
