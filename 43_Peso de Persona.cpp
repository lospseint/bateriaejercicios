

#include<iostream>
using namespace std;


#define ARREGLO_MAX 100



int main() {
	float altura[ARREGLO_MAX];
	float h;
	int i;
	float imc[ARREGLO_MAX];
	int n;
	string nombre[ARREGLO_MAX];
	float p;
	float peso[ARREGLO_MAX];
	float peso_ideal;
	string telefono[ARREGLO_MAX];
	cout << "" << endl;
	cout << "    B  I  E  N  V  E  N  I  D  O" << endl;
	cout << "                                " << endl;
	cout << "Este programa crea una matriz" << endl;
	cout << "a partir de datos suministrados " << endl;
	cout << "por el usuario" << endl;
	cout << "cuantos grabara hoy " << endl;
	cin >> n;
	for (i=1;i<=n;i++) {
		nombre[i-1] = " ";
		telefono[i-1] = " ";
	}
	for (i=1;i<=n;i++) {
		cout << "Ingrese el nombre completo " << endl;
		cin >> nombre[i-1];
		cout << "Ingrese el peso en kg de  " << nombre[i-1] << endl;
		cin >> peso[i-1];
		cout << "Ingrese su altura en metros de  " << nombre[i-1] << endl;
		cin >> altura[i-1];
		cout << " Ingrese su telefono de  " << nombre[i-1] << endl;
		cin >> telefono[i-1];
		imc[i-1] = (peso[i-1])/(altura[i-1]*altura[i-1]);
	}
	for (i=1;i<=n;i++) {
		if (imc[i-1]<=20) {
			cout << "Persona Delgada=" << endl;
		} else {
			if (imc[i-1]>20 && imc[i-1]<23) {
				cout << "La persona es Normal=" << endl;
			} else {
				if (imc[i-1]>23 && imc[i-1]<26) {
					cout << "Persona con Sobre Peso=" << endl;
				} else {
					if (imc[i-1]>26) {
						cout << "Persona Obesa=" << endl;
					}
				}
			}
		}
	}
	cout << "______________________________________________________________________________ " << endl;
	cout << "| matriz        Nombre     Peso    Altura    Telefono   Indice de Masa corporal  |" << endl;
	cout << "|_____________________________________________________________________________|" << endl;
	for (i=1;i<=n;i++) {
		cout << "_________________________________________________________________________________________________________" << endl;
		cout << "| nombre" << i << "   " << nombre[i-1] << "     " << peso[i-1] << "     " << altura[i-1] << "        " << telefono[i-1] << "     " << imc[i-1] << "  |" << endl;
		cout << "|________________________________________________________________________________________________________|" << endl;
	}
	cout << " " << endl;
	return 0;
}

