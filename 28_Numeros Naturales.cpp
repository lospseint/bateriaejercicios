

#include<iostream>
using namespace std;


int main() {
	int cant_impares;
	int cant_pares;
	int cont;
	int med;
	int n;
	int num;
	float suma;
	cant_pares = 0;
	cant_impares = 0;
	cont = 1;
	cout << "Ingrese la Cantidad de Numeros=" <<  endl;
	cin >> n;
	while (cont<=n) {
		cout << "Ingrese el Valor =" << cont << endl;
		cin >> num;
		if (num % 2==0) {
			cant_pares = cant_pares+1;
		} else {
			cant_impares = cant_impares+1;
			suma = suma+num;
			med = suma/cant_impares;
		}
		cont = cont+1;
	}
	cout << "La cantidad de pares son=" <<  endl;
	cin >> cant_pares;
	cout << "La cantidad de impares son =" <<  endl;
	cin >> cant_impares;
	cout << "El Promedio de los impares es =" <<  endl;
	cin >> med;
	return 0;
}

