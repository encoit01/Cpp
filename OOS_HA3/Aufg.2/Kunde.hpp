#pragma once
using namespace std;

class Kunde {
public:
	char* name;
	char* ort;
	int* alter;
	double umsatz;
	int transaktion;
	int id;
	static int anzahl;

	Kunde() {

	}
	~Kunde() {

	}
	Kunde(Kunde & o) {

	}
	void kaufe(double u) {

	}
	static int getAnzahl() {

	}
	void print() {

	}
};
