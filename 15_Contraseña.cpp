

#include<iostream>
using namespace std;



int main() {
	string clave;
	int intentos;
	int session;
	session = 0;
	intentos = 0;
	while (intentos<=3 && session==0) {
		cout << "Ingrese la clave" << endl;
		cin >> clave;
		if (clave=="Tuani") {
			cout << "Contrasena es Correcta=" << endl;
			session = 1;
		} else {
			cout << "Contrasena es Incorrecta=" << endl;
			intentos = intentos+1;
			cout << endl; // no hay forma directa de borrar la pantalla con C++ estandar
		}
	}
	return 0;
}

