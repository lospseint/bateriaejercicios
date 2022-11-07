

#include<iostream>
using namespace std;



int main() {
	float com;
	float costo;
	float die;
	float gr;
	float gs;
	int opc;
	cout << "1:Gasolina Regualar=" << endl;
	cout << "2: Gasolina Super =" << endl;
	cout << "3:Diesel=" << endl;
	cin >> opc;
	cout << "Ingrese Cantidad en litros de combustible=" << endl;
	cin >> com;
	switch (opc) {
	case 1:
		costo = com*32.85;
		cout << "Costo de Compra=" << costo << endl;
		cin >> costo;
		break;
	case 2:
		costo = com*33.48;
		cout << "Costo de Compra=" << costo << endl;
		cin >> costo;
		break;
	case 3:
		costo = com*28.45;
		cout << "Costo de Compra =" << costo << endl;
		cin >> costo;
		break;
	default:
		cout << endl; // no hay forma directa de borrar la pantalla con C++ estandar
	}
	return 0;
}

