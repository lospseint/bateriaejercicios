
#include<iostream>
#include<cmath>
using namespace std;



int main() {
	float fx;
	float x;
	cout << "Ingrese un Numero=" << x << endl;
	cin >> x;
	if (x>0) {
		fx = pow((x-2),2)/2+pow((x-4),4)/4+pow((x-6),6)/6;
		cout << "El valor es =" << fx << endl;
		cin >> fx;
	} else {
		if (x<0) {
			fx = pow((x+2),2)/2+pow((x+4),4)/4+pow((x+6),6)/6;
			cout << "El valor es =" << fx << endl;
			cin >> fx;
		}
	}
	return 0;
}

