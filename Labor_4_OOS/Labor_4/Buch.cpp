#include "Buch.hpp"
#include "Medium.hpp"
#include <iostream>

Buch::Buch(string t, string a, string v, int jahr):Medium(t, v, jahr, "Buch"){
	autor = a;
}

void Buch::print()const {
	Medium::print();
	cout << "Autor:		" << autor << endl;
}

Buch* Buch::clone()const {
	return new Buch(*this);
}