

#include<iostream>
using namespace std;



int main() {
	int i;
	int n;
	cout << "Ingrese un número" << endl;
	cin >> n;
	i = 0;
	while (n>1) {
		if (n%2==0) {
			n = n/2;
		} else {
			n = n*3+1;
			i = i+1;
		}
	}
	cout << i << endl;
	return 0;
}

