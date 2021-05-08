#include "Person.hpp"
#include "Student.hpp"
#include <iostream>

Student::Student(string name, int matN):Person(name, 30), matNr(matN) {
}

void Student::print()const {
	cout << getName() << endl;
}