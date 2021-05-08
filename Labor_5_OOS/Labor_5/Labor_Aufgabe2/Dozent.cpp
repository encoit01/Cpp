#include"Dozent.hpp"

Dozent::Dozent(string name, int prfrNr) :Person(name) {
	this->prfrNr = prfrNr;
}
void Dozent::print() const {
	cout << "Name: " << name << endl << "Ausleihdauer: " << ausleihdauer << endl << "Prüfernummer: " << this->prfrNr << endl;
}