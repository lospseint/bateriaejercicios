

#include<iostream>
using namespace std;



int main() {
	int a;
	float b;
	cout << "Ingrese el numero =" << endl;
	cin >> a;
	b = a%2;
	if (a==0) {
		cout << "El numero no es par ni impar" << endl;
	} else {
		if (b==0) {
			cout << "El numero es Par" << endl;
		} else {
			cout << "El numero no es par" << endl;
		}
	}
	return 0;
}

