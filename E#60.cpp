#include <iostream>

using namespace std;

int main(){
	
  int i = 1;
  float n, fac;

  cout<<"ingrese un numero: ";
  cin>>n;

  fac = 1;

  do {
    fac = fac * i;
    i++;
  }while(i<=n);

  cout<<"El factorial es: "<<fac;

  return 0;
	
	return 0;
	
}
