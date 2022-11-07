

#include<iostream>
using namespace std;



int main() {
	float a;
	float b;
	cout << "Ingrese el Primer numero=" << endl;
	cin >> a;
	cout << "Ingrse el segundo numero=" << endl;
	cin >> b;
	if (a==b) {
		cout << "LOS NUMEROS SON IGUALES" << endl;
	} else {
		if (a>b) {
			cout << "El primer numero es Mayor =" << endl;
			cin >> a;
		} else {
			if (a<b) {
				cout << "El segundo numero es Mayor=" << endl;
				cin >> b;
			}
		}
	}
	return 0;
}

