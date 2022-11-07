#include<iostream>
using namespace std;
int main(int argc,char *argv[]) { 

int h,m;
double PH,PM,To;

cout <<"Ingrese el total de hombres ="<< endl;
cin >> h;
cout <<"Ingrese el total de Mujeres ="<<  endl;
cin >> m;

To=h+m;

PH=(h*100/To);

PM=(m*100/To);

cout <<"El Total de Personas  ="<<To<< endl;
cout <<"El Porcentaje de hombres  ="<<PH<< endl;
cout <<"El Porcentaje de Mujeres ="<<PM<< endl;


return 0;



}