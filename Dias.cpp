#include <iostream>

using namespace std;

int main() {
	int dia;
	
	cout<<"Ingresar el numero del d�a de la semana: ";
	cin>>dia;
	
	if(dia == 1){
		cout<<"El d�a es lunes";
	}else if (dia == 2){
		cout<<"El d�a es martes";
	}else if (dia == 3){
		cout<<"El d�a es miercoles";
	}else if (dia == 4) {
		cout<<"El d�a es jueves";
	}else if (dia == 5) {
		cout<<"El d�a es viernes";
	}else if (dia == 6)  {
		cout<<"El d�a es sabado";
	}else if (dia == 7) {
		cout<<"El d�a es domingo";
	}else {
		cout<<"Numero fuera de rango";
	}
	
	return 0;
}
