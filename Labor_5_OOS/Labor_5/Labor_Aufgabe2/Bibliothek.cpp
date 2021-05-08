#include"Bibliothek.hpp"

Bibliothek::Bibliothek(int maxanzahl):maxAnz(maxanzahl)
{
	anz = 0;
	medien = new Medium*[maxAnz];
}
Bibliothek::~Bibliothek()
{


}
/* void Bibliothek::mediumBeschaffen(Buch& buch)
{
	 if(anz<maxAnz)
	 {
		 medien[anz] = &buch;
		 anz++;
	 }
	 else
	 {
		 cout << "Bib voll";
	 }
}
 void Bibliothek::mediumBeschaffen(DVD&dvd)
 {
	if(anz<maxAnz)
	{ 
		medien[anz] = &dvd;
		anz++;
	}
 }
*/void Bibliothek::mediumBeschaffen(Medium & paramMedi) {
	if (anz < maxAnz) {
		Medium *temp = paramMedi.clone();
		medien[anz] = &paramMedi;
		anz++;
	}
	else cout << "Bib voll!";
}
 void Bibliothek::mediumSuchen(string suchwort) {
	 cout << endl << "Suchwort: " << suchwort << endl;
	 int counter = 0;
	 for (int i = 0; i < anz; i++) {
		 //if (medien[i]->getTitel().find(suchwort,))
		 if (medien[i]->getTitel().find(suchwort) != string::npos)
		 {
			 counter++;
			 if (medien[i]->getTyp() == "Buch")
			 {
				 Buch * casted = (Buch*)medien[i];
				 casted->print();
			 }
			 else
			 {
				 DVD * casted = (DVD*)medien[i];
				 casted->print();
			 }
		 }
	 }
	 cout << endl << "es gab insgesamt " << counter << " treffer Suchwort: " << suchwort << endl;
 }
 
void Bibliothek::mediumAusleihen(int nr, Person & p, Datum d) {
	if (nr <= anz) {
		medien[nr - 1]->ausleihen(p, d, d + p.getAusleihdauer());
	}
}

// alle Medien in der Konsole ausgeben
void Bibliothek::print() const {
	for (int i = 0; i < anz; i++) {
		if (medien[i]->getTyp() == "Buch")
		{
			Buch * casted = (Buch*)medien[i];
			casted->print();
		}
		else
		{
			DVD * casted = (DVD*)medien[i];
			casted->print();
		}

	}
}