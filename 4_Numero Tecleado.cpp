

#include<iostream>
using namespace std;



int main() {
	float a;
	float b;
	float c;
	float res;
	cout << "El primer numero=" << endl;
	cin >> a;
	cout << "El segundo numero=" << endl;
	cin >> b;
	cout << "El Tercer numero=" << endl;
	cin >> c;
	if (a<0) {
		res = a*b*c;
	} else {
		res = a+b+c;
	}
	cout << "resultado=" << res << endl;
	cin >> res;
	
	return 0;
}

