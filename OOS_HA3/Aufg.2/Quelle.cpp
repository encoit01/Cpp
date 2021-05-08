#include "Kunde.hpp"
#include <iostream>

Kunde::Kunde():name(),ort(),alter(0){

}

void Kunde::kaufe(double u) {
	umsatz = umsatz + u;
	transaktion++;
}
int Kunde::getAnzahl(){
	return anzahl;
}
void Kunde::print() {
	cout << "Kunde" << *name << aus << *ort << "(ID = " << id << "," << *alter << "Jahre) hatte" << transaktion << endl << "Transaktion(en) und " << umsatz << "Euro Umsatz!" << endl;
}