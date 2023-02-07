#include<iostream>

using namespace std;

int main(){
  int i = 1;

  do {
    cout<<"Ingresar un numero: "<<endl;
    cin>>i;
  }while(i<=-1||i>=1);

  return 0;
}
