#include "Datum.hpp"
#include <iomanip>
// Standardkonstruktor
Datum::Datum(int tag, int monat, int jahr) {
	this->tag = tag;
	this->monat = monat;
	this->jahr = jahr;
}
// Konvertierkonstruktor für String
Datum::Datum(const string &datum) {
	string dat = datum;
	tag = atoi((dat.substr(0, dat.find_first_of('.'))).c_str());
	dat.erase(0, dat.find_first_of('.') + 1);
	monat = atoi((dat.substr(0, dat.find_first_of('.'))).c_str());
	dat.erase(0, dat.find_first_of('.') + 1);
	jahr = atoi(dat.c_str());
}
// Konvertierkonstruktor für C-String
Datum::Datum(const char * cstr) {
	string dat = cstr;
	tag = atoi((dat.substr(0, dat.find_first_of('.'))).c_str());
	dat.erase(0, dat.find_first_of('.') + 1);
	monat = atoi((dat.substr(0, dat.find_first_of('.'))).c_str());
	dat.erase(0, dat.find_first_of('.') + 1);
	jahr = atoi(dat.c_str());
}
// Operator + addiert eine Anzahl von Tagen zum Datum hinzu
Datum Datum::operator+(int tage) {

	int rest = tage;
	while (rest != 0)
	{
		
		
			if (tag + rest <= 30) {
				tag += rest;
				rest = 0;
			}
			else
			{
				rest = rest - 31;
				monat++;
				tag = 1;
			}
		
	}
	return *this;
}
// Ausgabeoperator <<, Ausgabe in dem Format tt.mm.jjjj
ostream & operator<<(ostream &stream, const Datum &dat) {
	stream << std::setw(2) << std::setfill('0') << dat.tag << '.' << dat.monat << '.' << std::setw(4) << dat.jahr;
	return  stream;
}