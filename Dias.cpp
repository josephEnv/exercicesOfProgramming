#include <iostream>

using namespace std;

int main() {
	int dia;
	
	cout<<"Ingresar el numero del día de la semana: ";
	cin>>dia;
	
	if(dia == 1){
		cout<<"El día es lunes";
	}else if (dia == 2){
		cout<<"El día es martes";
	}else if (dia == 3){
		cout<<"El día es miercoles";
	}else if (dia == 4) {
		cout<<"El día es jueves";
	}else if (dia == 5) {
		cout<<"El día es viernes";
	}else if (dia == 6)  {
		cout<<"El día es sabado";
	}else if (dia == 7) {
		cout<<"El día es domingo";
	}else {
		cout<<"Numero fuera de rango";
	}
	
	return 0;
}
