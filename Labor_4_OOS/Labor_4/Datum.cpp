#define _CRT_SECURE_NO_WARNINGS
#include "Datum.hpp"


Datum::Datum(int i, int k, int j) {
	tag = i;
	monat = k;
	jahr = j;
}

Datum::Datum(const string & s) {
	sscanf(s.c_str(), "%d.%d.%d", &tag, &monat, &jahr);
	if (tag > 30) {
		tag = tag - 30;
		monat = monat + 1;
	}
	if (monat > 12) {
		monat = monat - 12;
		jahr = jahr + 1;
	}
	}

Datum::Datum(const char* s) {
	sscanf(s, "%d.%d.%d", &tag, &monat, &jahr);
	if (tag > 30) {
		tag = tag - 30;
		monat = monat + 1;
	}
		if (monat > 12) {
			monat = monat - 12;
			jahr = jahr + 1;
		}
	}

Datum Datum::operator+(int tage) {
	this->tag = tag + tage;
	if (tag > 30) {
		tag = tag - 30;
		monat = monat + 1;
	}
		if (monat > 12) {
			monat = monat - 12;
			jahr = jahr + 1;
		}
		return *this;
}

ostream & operator<<(ostream& o, const Datum& d) {
	o << d.tag << ".";
	o << d.monat << ".";
	o << d.jahr;
	return o;
}

