#include <iostream>

using namespace std;

int main(){
	
	int num, i, fact = 1;
	
	cout<<"De que numero quieres hayar el factorial?: ";
	cin>>num;

	for(i = 1; i<=num; i++){
		fact = fact * i;
	}
	
	cout<<"El factorial de "<<num<<" es: "<<fact;
	
	return 0;
	
}
