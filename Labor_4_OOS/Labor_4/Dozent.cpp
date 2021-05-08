#include "Person.hpp"
#include "Dozent.hpp"
#include <iostream>


Dozent::Dozent(string name, int prfrNr):Person(name,30) {
	prfrNr = prfrNr;
}

void Dozent::print()const {
	cout << "Prof" << getName() << endl;
}
