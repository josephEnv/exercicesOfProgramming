#include<iostream>

using namespace std;

int main() {
  int i, selec;
  do {
    cout<<"Escriba un numero: ";
    cin>>i;

    cout<<"desea ingresar otro numero: ";
    cout<<"(1)Si -- (2)No";

    cin>>selec;
  }while(selec!=2);

  return 0;
}
