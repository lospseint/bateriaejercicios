

#include<iostream>
using namespace std;


int main() {
	int c;
	int n;
	int vector[10];
	int x;
	for (x=1;x<=10;x++) {
		cout << "Ingrese un Numero=" << endl;
		cin >> vector[x-1];
	}
	cout << "Ingrese un Numero a Buscar=" << endl;
	cin >> n;
	c = 0;
	for (x=1;x<=10;x++) {
		if (n==vector[x-1]) {
			cout << "El Numero esta en la posicion=2" << x << endl;
			c = 1;
		}
	}
	if (c==0) {
		cout << "El Numero no se encontro =" << endl;
	}
	return 0;
}

