

#include<iostream>
using namespace std;



int main() {
	int a;
	int b;
	int h;
	cout << "Ingresa la Altura=" << endl;
	cin >> h;
	for (a=1;a<=h;a++) {
		for (b=a;b<=h;b++) {
			cout << " * ";
		}
		cout << " " << endl;
	}
	return 0;
}

