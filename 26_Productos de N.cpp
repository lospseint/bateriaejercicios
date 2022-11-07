

#include<iostream>
using namespace std;



int main() {
	float n;
	float producto;
	float res;
	cout << "El Programa finaliza cuando se ingrese cero" << endl;
	n = 1;
	producto = 0;
	res = 1;
	while (n!=0) {
		cout << "Ingrese un numero" << endl;
		cin >> n;
		if (n!=0) {
			res = res*n;
			producto = res;
		}
	}
	cout << "El Producto de los numeros es =" << producto << endl;
	return 0;
}

