#include "Bibliothek.hpp"
#include <iostream>

Bibliothek::Bibliothek(int maxAnz):maxAnz(maxAnz) {
	medien = new Medium*[maxAnz];
	anz = 0;
}
Bibliothek::~Bibliothek() {

}

void Bibliothek::mediumBeschaffen(Buch & b) {
	if (anz < maxAnz) {
		medien[anz] = &b;
		anz++;
	}
}

void Bibliothek::mediumBeschaffen(DVD & d) {
	if (anz < maxAnz) {
		medien[anz] = &d;
		anz++;
	}
}

void Bibliothek::mediumBeschaffen(Medium & m) {
	if(anz < maxAnz){
		medien[anz] = m.clone();
	}
}

void Bibliothek::mediumSuchen(string suchwort) {
	cout << endl;
	cout << "----------------------------------------------------------" << endl;
	cout << "Suche nach: " << suchwort << endl;
	for (int i = 0; i < anz; i++) {
		if (medien[i]->getTitel().find(suchwort)) {
			medien[i]->print();
		}
	}
}
void Bibliothek::mediumAusleihen(int nr, Person &p, Datum d) {
	Datum k = d;
	medien[nr]->ausleihen(p, d,k + p.getAusleihdauer());
}
void Bibliothek::print()const{
	for (int t = 0; t < anz; t++) {
			medien[t]->print();
		}
	}
