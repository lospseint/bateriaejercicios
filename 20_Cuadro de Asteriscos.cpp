

#include<iostream>
using namespace std;



int main() {
	float i;
	float j;
	float n;
	cout << "Ingrese el numero" << endl;
	cin >> n;
	for (i=1;i<=n;i++) {
		for (j=1;j<=n;j++) {
			cout << " * ";
		}
		cout << "  " << endl;
	}
	return 0;
}

