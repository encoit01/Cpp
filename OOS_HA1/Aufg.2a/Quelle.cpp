#include <cmath>
#include <iostream>
using namespace std;
int basis, exponent;
int main(void) {
	cout << endl << "Basis = ";
	cin >> basis;
	cout << endl;
	cout << "Exponent = ";
	cin >> exponent;
	cout << endl << "Ergebnis: ";
	cout << basis << exponent << " = "
		<< pow(basis, exponent);
	return 0;
}