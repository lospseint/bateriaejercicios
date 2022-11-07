

#include<iostream>
using namespace std;


int main() {
	int cobro;
	int matricula;
	int mensualidad;
	int ninos;
	int sociedad;
	cout << "Ingrese cantidad de ninos=" << endl;
	cin >> ninos;
	cout << "monto de matricula por ninos=" << endl;
	cin >> matricula;
	cout << "Mensualidad del mes de Septiembre =" << endl;
	cin >> mensualidad;
	cout << "Cobro de la Socieda por Familia=" << endl;
	cin >> cobro;
	if (ninos==2) {
		sociedad = cobro-cobro*0.10;
	} else {
		if (ninos==3) {
			sociedad = cobro-cobro*0.15;
		} else {
			if (ninos>3) {
				sociedad = cobro-cobro*0.20;
			}
		}
	}
	cout << "Monto a pagar =" << matricula+mensualidad+sociedad << endl;
	return 0;
}

