#include <string> 
#include <iostream>
#include <iomanip>

using namespace std;
int i;
int * arry = new int[i];
float erg = 0;





int main(void) {
	i = 0;
	do {
		cout << "Wie viele Zahlen m�chten sie eingeben?";
		cin >> i;
	} while (i == 0);
	int * arry = new int[i];

	for (int k = 0; k < i; k++) {
		cout << endl << "Zahl eingeben: ";
		cin >> arry[k];
	}
	for (int k = 0; k < i; k++) {
		cout << "Zahl: " << arry[k] << endl;
	}

	for (int j = 0; j < i; j++) {
		erg = erg + (float)arry[j];
	}
	erg = erg / i;
	cout << "Durchschnitt: " << erg;
	delete(arry);
	return 0;
} 

