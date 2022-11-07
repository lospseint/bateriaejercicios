

#include<iostream>
using namespace std;



int main() {
	char empleado;
	int ht;
	int i;
	double sbh;
	double sm;
    double sn;
    
	cout << "Nombre del Empleado =" << endl;
	cin >> empleado;
	cout << "Numeros de Horas Trabajadas en la semana =" << endl;
	cin >> ht;
	cout << "Salario neto mensual = " <<  endl;
	cin >> sm;
	sbh = sm/30/8;
	
	if (ht>48) {
		i = 1.35*(ht-48);
	} else {
		if (ht<=48) {
			i = 0;
		}
	}
	sn = sbh*8*6+i;
	cout << "Salario Neto por Semana =" << endl;
	cin >> sn;
	cout << "el nombre del empleado es =" <<  endl;
	cin >> empleado;
	return 0;
}

