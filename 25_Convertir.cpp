

#include<iostream>
using namespace std;



int main() {
	float c;
	float f;
	int opcion;
	cout << "A Cual sistema de desea Convertir" << endl;
	cout << "1:Celsius" << endl;
	cout << "2: farenheit " << endl;
	cin >> opcion;
	switch (opcion) {
	case 1:
		cout << "Ingrese el Valor de farenheit" << endl;
		cin >> f;
		c = (f-32)*9/5;
		cout << "Valor de Celsius=" << c << endl;
		cin >> c;
		break;
	case 2:
		cout << "Ingrese el Valor de Celsius=" << endl;
		cin >> c;
		f = 5/9*c+32;
		cout << "El Valor de Farenheit=" << f << endl;
		cin >> f;
		break;
	default:
		cout << "salir" << endl;
	}
	return 0;
}

