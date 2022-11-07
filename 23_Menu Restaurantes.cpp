

#include<iostream>
using namespace std;



int main() {
	float cervezas;
	float jamon;
	float refrescos;
	float total;
	cout << "Introduzca la cantidad servida de ..." << endl;
	cout << "... bocadillos de jamón: " << endl;
	cin >> jamon;
	cout << "... Refresco: " << endl;
	cin >> refrescos;
	cout << "... cervezas: " << endl;
	cin >> cervezas;
	total = jamon*1.5+refrescos*1.05+cervezas*0.75;
	cout << "El total de la factura es: " << total << " Cordobas" << endl;
	return 0;
}

