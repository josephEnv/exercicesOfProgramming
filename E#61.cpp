#include<iostream>

using namespace std;

int main() {
  int n, i=1, pos=0, neg=0, can;

  cout<<"Digitar la cantidad de numeros: ";
  cin>>can;

  do {
    cout<<"Ingrese un numero: ";
    cin>>n;

    if (n>=1){
      pos++;
    }else if(n<=-1){
      neg++;
    }
    i++;
  }while(i<=can);
  
  cout<<"La cantidad de positivos: "<<pos<<endl;
  cout<<"La cantidad de negativos: "<<neg<<endl;

  return 0;
}
