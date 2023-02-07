#include<iostream>

using namespace std;

int main(){
  int i, tb;

  cout<<"Ingresa la tabla: ";
  cin>>tb;

  do{
    cout<<tb<<" + "<<i<<" = "<<i+tb<<endl;
    i++;
  }while(i<=12);

  return 0;
}
