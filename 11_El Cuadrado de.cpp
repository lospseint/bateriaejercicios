
#include<iostream>
#include<cmath>
using namespace std;



int main() {
	float num;
	float res;
	for (num=1;num<=9;num++) {
		res = pow(num,2);
		cout << "El cuadrado es =" << res << endl;
		cin >> res;
	}
	return 0;
}

