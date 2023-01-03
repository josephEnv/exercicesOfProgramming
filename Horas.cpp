#include <iostream>

using namespace std;

int main () {
	int horas, horasExtra, totalHoras;
	string nom;
	
	cout<<"Ingresar el nombre del empleado: ";
	cin>>nom;
		
	cout<<"Ingrese las horas que trabaja "<<nom<<": ";
	cin>>horas;
	
	if(horas <= 40) {
		cout<<"En total se le pagara: "<<horas*20<<" dolares";
	}else if (horas >= 41 && horas <= 50){
		totalHoras = 40 * 20;
		horasExtra = (horas - 40) * 25;
		cout<<"En total se le pagara: "<<totalHoras + horasExtra;
	}else if (horas >= 51 && horas <= 60){
		totalHoras = 40 * 20;
		horasExtra = (horas - 40) * 30;
		cout<<"En total se le pagara: "<<totalHoras + horasExtra; 
	}else {
		cout<<"Esa cantidad de horas no esta registrada";
	}
	
	return 0;
}
