

#include<iostream>
using namespace std;



int main() {
	int a;
	int b;
	float c;
	int d;
	float e;
	int facta;
	int factb;
	int factc;
	int x;
	int z;
	cout << "Ingrese el valor de a =" << endl;
	cin >> a;
	cout << "Ingrese el valor de b =" << endl;
	cin >> b;
	if (a<0) {
		cout << "Ingrese un numero positivo= " << endl;
	} else {
		facta = 1;
		for (x=1;x<=a;x++) {
			facta = facta*x;
		}
	}
	cout << "valor de factorial =" << facta << endl;
	if (b<0) {
		cout << "Ingrese un numero positivo =" << endl;
	} else {
		factb = 1;
		for (z=1;z<=b;z++) {
			factb = factb*z;
		}
	}
	cout << "valor de factorial =" << factb << endl;
	if (c<0) {
		cout << "Ingrese un numero positivo =" << endl;
	} else {
		c = (a-b);
		factc = 1;
		for (d=1;d<=c;d++) {
			factc = factc*d;
		}
	}
	cout << "valor de factorial =" << factc << endl;
	e = facta/(factc*factb);
	// LA FORMULA =a!/((a-b)!b!)
	cout << "Valor de la formula a!/((a-b)!b!)es =" << e << endl;
	return 0;
}

