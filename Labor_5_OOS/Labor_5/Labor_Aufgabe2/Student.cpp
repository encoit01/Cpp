#include "Student.hpp"

Student::Student(string name, int matNr) :Person(name) {
	this->matNr = matNr;
}
void Student::print() const {
	cout << "Name: " << name << endl << "Ausleihdauer: " << ausleihdauer << endl << "Matrikelnummer: " << this->matNr << endl;
}
