#include <iostream>

using namespace std;

int main(){
	int dia;
	
	cout<<"Ingresar una dia: ";
	cin>>dia;
	
	
	
	switch(dia){
		case 1:
			cout<<"Hoy es lunes";
		break;
		case 2:
			cout<<"Hoy es martes";
		break;
		case 3:
			cout<<"Hoy es miercoles";
		break;
		case 4:
			cout<<"Hoy es jueves";
		break;
		case 5:
			cout<<"Hoy es viernes";
		break;
		case 6:
			cout<<"Hoy es sabado";
		break;
		case 7:
			cout<<"Hoy es domingo";
		break;
		
		default:
			cout<<"el dia que ingresaste no es valido";
			
	}
	
	return 0;
	
}
