#include <cmath>
#include <iostream>
using namespace std;

const int anz = 5;
int arry[5];


void eingabe(void) {
	for (int i = 0; i < anz; i++) {
		cout << "Zahl eingeben: ";
		cin >> arry[i];
	}
}
int ausgabe(void) {
	for (int i: arry) {
		cout << "Eingegebene Zahl: " << i << endl;
	}
		return 0;
}

int erhöhen(void) {
	for (int i = 0; i < anz; i++){
		arry[i] = arry[i] + 1;
	}
	return 0;
}

int durchschnitt(void) {
	int erg = 0;
	for (int i : arry) {
		erg = erg + i;
	}
	int ausg = (erg / 5);
	cout << ausg;
	return 0; 
}

int main(void) {
	eingabe();
	ausgabe();
	erhöhen();
	ausgabe();
	durchschnitt();
	return 0;
}
