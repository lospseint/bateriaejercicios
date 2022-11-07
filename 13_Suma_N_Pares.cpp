

#include<iostream>
using namespace std;



int main() {
	float contador;
	float n;
	float suma;
	int x;
	cout << "Cuantos numeros ingresara" << endl;
	cin >> n;
	x = 1;
	contador = 1;
	while (contador<=n) {
		if (x%2==0) {
			cout << x << endl;
			suma = suma+x;
			contador = contador+1;
		}
		x = x+1;
	}
	cout << " La suma es " << suma << endl;
	cin >> suma;
	return 0;
}

