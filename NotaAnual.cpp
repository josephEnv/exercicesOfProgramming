#include <iostream>

using namespace std;

int main(){
	string nombre, curso, asignatura;
	float Anual;
	
	cout<<"Ingresar el nombre del estudiante: ";
	cin>>nombre;
	
	cout<<"Ingresar el curso del estudiante: ";
	cin>>curso;
	
	cout<<"Ingresar la asignatura del estudiante: ";
	cin>>asignatura;
	
	cout<<"Ingresar la nota anual del estudiante: ";
	cin>>Anual;
	
	if(Anual>=7){
		cout<<"El estudiante aprueba el año con: "<<Anual;
	}else{
		cout<<"El estudiante reprueba el año con: "<<Anual;		
	}
	
	return 0;
}
