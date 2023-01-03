//EJERCICIO #48

#include <iostream>

using namespace std;

int main(){
	int c=0, sum;
	
	cout<<"Ingresa la tabla de suma a realizar: ";
	cin>>sum;
	
	while(c<12){
		
		c++;
		
		cout<<sum<<" + "<<c<<" = "<<sum+c<<endl;
		
	}
	
	return 0;
}
