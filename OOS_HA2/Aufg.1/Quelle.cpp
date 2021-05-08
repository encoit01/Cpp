#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <conio.h> 
#include "deklaration.h"
#include <string>

// f�r _getch()
// Achtung: _getch() ist nicht im Standard und 
//          daher abh�ngig vom Compiler
using namespace std;

// Gr��e des Labyrinths


// Zeichen, die im Labyrinth vorkommen k�nnen,
// NL = new line, EOS = end of string


// Das Labyrinth als char-Array
// Die vorletzte Spalte speichert ein Zeilenendezeichen \n
// und die letzte ein \0-Zeichen, damit die Ausgabe leichter wird.
char labyrinth[kZeilen][kSpalten + 2];

// Labyrinth mit # f�llen


// Durch Herumlaufen werden Wege im Labyrinth erzeugt
// ASCII-Wert der Tasten: oben 72, links 75, rechts 77, unten 80


int main(){


	Labyrinth lab;

	lab.legeMuenzen();
	lab.drucken();
	lab.erzeugen();

	return 0;
}