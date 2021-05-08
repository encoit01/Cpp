#include <string>
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	double d = 1.234;
	cout << "Nr  Oct  Hex String  Fixed     Scientific " << endl;
	for (int k = 1; k < 11; k++) {
		cout << setw(2) << dec << k;
		cout << setw(4) << oct << k;
		cout << setw(5) << "Ox" << hex << k ;
		cout << setw(8) << left << setfill('+') << string(k % 5 + 1, '*') << " ";
		cout << setw(9)  << setfill(' ') <<  showpos << fixed << right <<  setprecision(3) << d;
		cout << setw(12) << scientific << right << noshowpos << d;
		d = d * -2;
		cout << endl;
	}
	return 0;
}