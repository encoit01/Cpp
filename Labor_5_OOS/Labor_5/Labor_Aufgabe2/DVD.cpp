#include "DVD.hpp"

DVD::DVD(string t, string v, int j, int d) :Medium(t, v, j /*"DVD"*/), dauer(d) {

}
// die DVD auf der Konsole ausgeben
void DVD::print() const {
	cout << "Typ: DVD" << endl << "Titel: " << titel << endl << "Verlag: " << verlag << endl << "Jahr: " << jahr << endl << "Dauer: " << dauer << endl;
	if (ausleiher != NULL)
	{
		cout << "Ausleiher: " << ausleiher->getName() << endl << endl;
	}
	else
	{
		cout << "Ausleiher: " << "Kein" << endl << endl;
	}
}