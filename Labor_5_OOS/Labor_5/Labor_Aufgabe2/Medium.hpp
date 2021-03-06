// Medium.hpp
#pragma once

#include<iostream>
#include <string>
#include "Datum.hpp"
#include "Person.hpp"
using namespace std;

// Klasse für die Medien, die in der Bibliothek ausgeliehen werden 
// können
class Medium {
protected:// Titel des Mediums
	const string titel;
	// Verlag, der das Medium herausgibt
	const string verlag;
	// Jahr, in dem das Medium veröffentlicht wurde
	const int jahr;
	// Typ des Mediums (z.B. Buch, DVD, ...)
	// wird von den abgeleiteten Klassen festgelegt
	const string typ;
	// ausgeliehen von
	Person * ausleiher;
	// ausgeliehen am 
	Datum von;
	// ausgeliehen bis
	Datum bis;

public:
	// Konstruktor
	Medium(string t = "", string v = "", int j = 0 
		   /*string typ = "undef"*/);
	// Titel zurückliefern
	virtual string getTitel() const;
	// Typ zurückliefern
	virtual string getTyp() const;
	// Ausleiher zurückliefern
	virtual Person * getAusleiher() const;
	// das Mediuem "ausleihen", d.h. Person p, von und bis eintragen
	virtual void ausleihen(Person & p, Datum von, Datum bis);
	// Medium in der Konsole ausgeben
	virtual void print() const;
	virtual Medium *clone() {return new Medium (*this);}

};
