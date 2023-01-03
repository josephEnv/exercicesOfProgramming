#include <iostream>

using namespace std;

int main() {
	
	int tabla, i, j;
	string opt;
	cout<<""<<endl;
	cout<<" ##################################"<<endl;
	cout<<"       TABLAS DE MULTIPLICAR       "<<endl;
	cout<<" ##################################"<<endl;
	cout<<""<<endl;
	
	

	do{
		
		cout<<""<<endl;
		cout<<" Ingresar la tabla que quiere trabajar: ";
		cin>>tabla;
		
		for(i = 1; i<=12; i++){
			
			cout<<i<<" x "<<tabla<<" = "<<i*tabla<<endl;
		
		}
		
		cout<<""<<endl;
		cout<<" [y]es or [n]o"<<endl;
		cout<<""<<endl;
	
		cout<<" Quieres seguir con el proceso?: ";	
		cin>>opt;
			
	}
	while(opt == "y");
	

	return 0;	
}
