#include "Person.hpp"


Person::Person(string name, int dauer) {
	this->name = name;
	this->ausleihdauer = dauer;
}
string Person::getName()const {
	return name;
}
int Person::getAusleihdauer()const {
	return ausleihdauer;
}
void Person::print()const {
	cout << "Name: " << this->name << endl << "Ausleihdauer: " << this->ausleihdauer << endl;
}