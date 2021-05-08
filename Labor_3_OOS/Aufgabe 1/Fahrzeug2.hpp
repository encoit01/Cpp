#include <iostream>
#include "MyString.hpp"
using namespace std;
class Fahrzeug {
	MyString kz;
	static int zaehler;
	int vin;
	double km;
	static double summeKm;
public:
	Fahrzeug(const char *KZ):kz(KZ),km(0) {
		zaehler++;
		vin = zaehler;

	}
	void fahren(double kmfahren) {
		km += kmfahren;
		summeKm += km;
	}
	static double getSummKm(){
		return summeKm;
	}
	~Fahrzeug(){
		summeKm -= km;
	}
	friend ostream &operator<<(ostream &os, Fahrzeug &f) {
		os << "KZ = " << f.kz << " VIN = " << f.vin << " km = " << f.km;
		return os;
	}
};