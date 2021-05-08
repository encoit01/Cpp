#include "Medium.hpp"
#include <iostream>

Medium::Medium(string t, string v, int j, string typ):titel(t), verlag(v), jahr(j), ausleiher(nullptr) {
}
string Medium::getTitel()const {
	return this->titel;
}

Person* Medium::getAusleiher()const {
	return this->ausleiher;
}

void Medium::ausleihen(Person & p, Datum von, Datum bis) {
	ausleiher = &p;
	this->von = von;
	this->bis = bis;
}
void Medium::print()const {
	cout << "--------------------------------------------------------" << endl;
	cout << "Titel:		" << getTitel() << endl;
	cout << "Verlag:		" << verlag << endl;
	cout << "Jahr:		" << jahr << endl;
	if (ausleiher == nullptr) {
		cout << "Ausleiher:	Kein" << endl;
	}
	else {
		ausleiher->print();
		cout << " von: " << von << " bis: " << bis << endl;
	}
}