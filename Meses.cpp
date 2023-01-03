#include<iostream>

using namespace std;

int main(){
	int mes;
	
	cout<<"Ingresar un mes: ";
	cin>>mes;
	
	
	switch(mes){
		case 1:
			cout<<"Estamos Enero";
		break;
		case 2:
			cout<<"Estamos Febrero";
		break;
		case 3:
			cout<<"Estamos Marzo";
		break;
		case 4:
			cout<<"Estamos Abril";
		break;
		case 5:
			cout<<"Estamos Mayo";
		break;
		case 6:
			cout<<"Estamos Junio";
		break;
		case 7:
			cout<<"Estamos Julio";
		break;
        case 8:
            cout<<"Estamos Agosto";
        break;
        case 9:
            cout<<"Estamos Septiembre";
        break;
        case 10:
            cout<<"Estamos Octubre";
        break;
        case 11:
            cout<<"Estamos Nomviembre";
        break;
        case 12:
            cout<<"Estamos Diciembre";
		break;
        default:
            cout<<"El mes ingresado no es valido";
			
	}
	
	return 0;
	
}
