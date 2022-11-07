

#include<iostream>
#include<cmath>
using namespace std;



int main() {
	float a;
	float b;
	float c;
	float d;
	float x;
	float x1;
	float x2;
	cout << "Ingresar el Coeficiente de A=" << endl;
	cin >> a;
	cout << "Ingresar el Coeficiente de B=" << endl;
	cin >> b;
	cout << "Ingresar el Coeficiente de C=" << endl;
	cin >> c;
	if (a!=0) {
		d = pow(b,2)-4*a*c;
		if (d>0) {
			x1 = (-b+sqrtf(d))/(2*a);
			x2 = (-b-sqrtf(d))/(2*a);
			cout << "La raiz de X1=" << x1 << endl;
			cout << "La raiz de X2=" << x2 << endl;
		} else {
			if (d<0) {
				cout << "Valores Imaginarios" << endl;
			} else {
				if (d==0) {
					x = -b/(2*a);
					cout << "La raiz de X" << x << endl;
					cin >> x;
				} else {
					cout << "No se puede calcular " << endl;
				}
			}
		}
	}
	cout << "No se puede Calcular para A=0" << endl;
	return 0;
}

