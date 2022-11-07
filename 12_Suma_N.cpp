

#include<iostream>
using namespace std;



int main() {
	float i;
	float n;
	float res;
	float s;
	float x;
	cout << "Ingrese el numero" << endl;
	cin >> n;
	res = 0;
	for (i=1;i<=n;i++) {
		res = res+i;
	}
	cout << "El Resultado de la suma=" << res << endl;
	cin >> res;
	return 0;
}

