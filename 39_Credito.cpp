

#include<iostream>
using namespace std;


#define SIN_TIPO string



int main() {
	SIN_TIPO monto;
	float sal;
	cout << "Ingrese su Salario=" << endl;
	cin >> sal;
	if (sal<200000) {
		cout << "Credito no Disponible" << endl;
	} else {
		if (sal>200000 && sal<500000) {
			cout << "Monto de Credito es=" << "C$" << 500000 << endl;
			cin >> monto;
		} else {
			if (sal>500000 && sal<1000000) {
				cout << "Monto de Credito es=" << "C$" << 2000000 << endl;
				cin >> monto;
			}
		}
	}
	return 0;
}

