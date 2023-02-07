#include<iostream>

using namespace std;

int main() {
  int i, tb;

  cout<<"Ingresa la tabla: ";
  cin>>tb;

  do {
    cout<<tb<<" * "<<i<<" = "<<tb*i;
    i++;
  }while(i<=12);

  return 0;
}
