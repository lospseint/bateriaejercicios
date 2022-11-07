

#include<iostream>
using namespace std;



int main() {
	float a;
	float b;
	float c;
	float suma;
	cout << "Ingrese el primer valor=" <<  endl;
	cin >> a;
	cout << "Ingrese el primer valor=" <<  endl;
	cin >> b;
	cout << "Ingrese el primer valor=" <<  endl;
	cin >> c;
	suma = a+b;
	if (suma==c) {
		cout << "Iguales=" << endl;
	} else {
		cout << "Distintos=" << endl;
	}
	return 0;
}

