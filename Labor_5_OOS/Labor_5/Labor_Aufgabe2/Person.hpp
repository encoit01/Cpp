// Person.hpp
#pragma once
#include<iostream>
#include <string>
using namespace std;

// Klasse für alle Personen, die Medien ausleihen können
class Person {
	protected:
	// Name der Person
	string name;
	// Dauer in Tagen, die die Person ein Medium ausleihen darf
	// wird von den abgelieteten Klassen festgelegt
	int ausleihdauer;
public:
	// Standardkonstruktor
	Person(string name, int dauer = 0);
	// den Namen zurückliefern
	virtual string getName() const;
	// die Ausliehdauer zurückliefern
	virtual int getAusleihdauer() const;
	// die Person auf der Konsole ausgeben
	virtual void print() const;
};


