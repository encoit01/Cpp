#include "DVD.hpp"
#include "Medium.hpp"
#include <iostream>

DVD::DVD(string t, string v, int j, int d):Medium(t,v,j, "DVD"), dauer(d) {
}

void DVD::print()const {
	Medium::print();
	cout << "Dauer:		" << dauer << endl;
}

DVD* DVD::clone() const {
	return new DVD(*this);
}