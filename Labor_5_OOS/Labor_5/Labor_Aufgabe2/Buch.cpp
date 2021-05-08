#include"Buch.hpp"
Buch::Buch(string t, string a, string v, int jahr) :Medium(t, v, jahr) {
	this->autor = a;
}

// das Buch auf der Konsole ausgeben
void Buch::print() const {
	cout << "Typ: Buch" << endl << "Titel: " << titel << endl << "Verlag: " << verlag << endl << "Jahr: " << jahr << endl << "Autor: " << autor << endl;
	if (ausleiher != NULL)
	{
		cout << "Ausleiher: " << ausleiher->getName() << endl << endl;
	}
	else
	{
		cout << "Ausleiher: " << "Kein" << endl << endl;
	}
}