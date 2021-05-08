// Main für Hausaufgabe 2
#include "Labyrinth.hpp"

int main() {
	Labyrinth lab;
	Labyrinth lab2;
	lab.drucken();
	lab.erzeugen();
	lab.drucken();
	//lab.exportDatei("lab.txt");
	//lab2.importDatei("lab.txt");
	lab2.drucken();
	lab2.legeMuenzen();
	lab2.drucken();
	return 0;
}
