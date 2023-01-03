//EJERCICIO #47

#include <iostream>

using namespace std;

int main(){
	
	int c=0, tab;
	
	cout<<"Ingrese la tabla a realizar: ";
	cin>>tab;
	
	while(c<12){
		c++;
		
		cout<<tab<<" x "<<c<<" = "<<tab*c<<endl;
	}
	
	return 0;
	
}
