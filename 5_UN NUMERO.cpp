

#include<iostream>
#include<cmath>
using namespace std;



int main() {
	float a;
	cout << "Ingrese el numero =" << endl;
	cin >> a;
	if (a<=0) {
		cout << "Error" << endl;
	} else {
		cout << "El Cuadrado de ese numero =" << pow(a,2) << endl;
		cout << "la Raiz Cuadrada=" << sqrtf(a) << endl;
	}
	return 0;
}

