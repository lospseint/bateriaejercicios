

#include<iostream>
using namespace std;


int main() {
	float a;
	float b;
	float c;
	cout << "Ingrese el primer numero=" << endl;
	cin >> a;
	cout << "Ingrese el segundo numero=" << endl;
	cin >> b;
	cout << "Ingrese el tercer numero=" << endl;
	cin >> c;
	if (a>b) {
		if (a>c) {
			cout << "El numero A es mayor=" << a << endl;
		}
	} else {
		if (b>c) {
			cout << "El numero B es mayor=" << b << endl;
		} else {
			cout << "EL numero C es mayor =" << c << endl;
		}
	}
	return 0;
}

