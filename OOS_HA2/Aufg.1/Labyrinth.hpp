#pragma once
#include <iostream>
#include <conio.h>
#include <algorithm>
#include "Position.hpp"

using namespace std;

const int kZeilen = 11;
const int kSpalten = 11;
const int kAnzGeister = 3;
enum Symbole {
	MAUER = '#', WEG = ' ', MUENZE = ':', NL = '\n',
	EOS = '\0', ICH = 'X', GEIST = 'G'
};

class Labyrinth {
	public:
		//Instanzvariabeln
		int labZeilen;
		int labSpalten;
		int labAnzGeister;
		int muenzen;
		char labyrinth[kZeilen][kSpalten + 2];
		
		//Instanzmethoden
		void initialisieren();
		void drucken();
		void erzeugen();
		Labyrinth();
		int getZeilen();
		int getSpalten();
		int getAnzGeister();
		int getMuenzen();
		void legeMuenzen();
		void zeichneChar(char, Position);
		void zeichneChar(char, Position, Position);
		char getZeichenAnPos(Position);
		bool istMuenzeAnPos(Position);
		char exportDatei();

};
