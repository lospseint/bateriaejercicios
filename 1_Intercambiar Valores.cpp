#include<iostream>
using namespace std;
int main() { 

float a,b,x;

cout <<"Ingrese el primer numero = " << endl; 
cin >>a;
cout <<"Ingrese el siguiente numero =" << endl; 
cin>>b;
x=a;
a=b;
b=x;

cout <<"El valor de A="<<a<<endl;

cout <<"El Valor de B ="<<x<<endl;


return 0;
} 

