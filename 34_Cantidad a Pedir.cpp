

#include<iostream>
using namespace std;



int main() {
	float cant;
	float existencia;
	float solicitar1;
	float solicitar2;
	float tipos;
	cout << "Ingrese el tipo de Producto=" << endl;
	cin >> tipos;
	cout << "Ingrese la Cantidad en Existencia=" << endl;
	cin >> existencia;
	if (tipos==1) {
		solicitar1 = 0.10*existencia;
	} else {
		if (tipos==2) {
			solicitar1 = 0.15*existencia;
		} else {
			if (tipos==3) {
				solicitar1 = 0.05*existencia;
			} else {
			}
		}
	}
	if (cant<10) {
		solicitar2 = 0.20*existencia;
	} else {
		if (cant>=10 && cant<20) {
			solicitar2 = 0.15*existencia;
		} else {
			if (cant>20) {
				solicitar2 = 0.10*existencia;
			} else {
				cout << endl; // no hay forma directa de borrar la pantalla con C++ estandar
			}
		}
	}
	cout << "Cantidad a pedir por Articulo=" << (solicitar1+solicitar2) << endl;
	return 0;
}

