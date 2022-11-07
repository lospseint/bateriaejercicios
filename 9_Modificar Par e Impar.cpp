

#include<iostream>
using namespace std;



int main() {
	int a;
	float b;
	cout << "Introducir un numero=" << endl;
	cin >> a;
	b = a%2;
	while (a<=0) {
		cout << "Introducir un numero mayor de cero=" << endl;
		cin >> a;
	}
	if (b==0) {
		cout << "El numero es par" << endl;
	} else {
		cout << "el numero es Impar" << endl;
	}
	return 0;
}

