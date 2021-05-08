#include "Medium.hpp"

// Konstruktor
Medium::Medium(string t, string v, int j /*string typ*/) :titel(t), verlag(v), jahr(j) /*typ(typ)*/ {
	ausleiher = NULL;
}
// Titel zur�ckliefern
string Medium::getTitel() const {
	return this->titel;
}
// Typ zur�ckliefern
string Medium::getTyp() const {
	return "unbekannt";
}
// Ausleiher zur�ckliefern
Person * Medium::getAusleiher() const {
	return this->ausleiher;
}
// das Mediuem "ausleihen", d.h. Person p, von und bis eintragen

void Medium::ausleihen(Person & p, Datum von, Datum bis) {
	this->ausleiher = &p;
	this->von = von;
	this->bis = bis;
}

// Medium in der Konsole ausgeben
void Medium::print() const {

}