#include "Fahrzeug2.hpp"

int Fahrzeug::zaehler = 0;
double Fahrzeug::summeKm = 0;

int main() {
	Fahrzeug f1("ES - H 123");
	cout << f1 << endl;
	f1.fahren(101.5);
	cout << f1 << endl;
	cout << f1.getSummKm()<<endl;

	Fahrzeug f2("ES - M 4711");
	f2.fahren(10.57);
	cout << f2 << endl;
	cout << f2.getSummKm() << endl;
	f1.fahren(101.5);
	cout << f1.getSummKm() << endl;

	for (int i = 0; i < 1; i++){
		Fahrzeug f3("ES - T 7651");
		f3.fahren(300.7);
		cout << f3 << endl;
		cout << f1.getSummKm() << endl;
	}
	cout << f1.getSummKm() << endl;
	while (1);
}