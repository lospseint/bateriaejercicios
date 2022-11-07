

#include<iostream>
using namespace std;



int main() {
	float cont;
	float n;
	float suma;
	cout << "El Nuemro es =" << endl;
	cin >> n;
	suma = 0;
	cont = 1;
	do {
		suma = suma+n;
		cont = cont+1;
		cin >> n;
	} while (n!=-1);
	cout << "El Promedio es =" << suma/(cont-1) << endl;
	return 0;
}

