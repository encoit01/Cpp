#pragma once

#include <iostream>
#include <string>
#include <conio.h>
#include <math.h>
#include "Position.hpp"


enum Symbole {
	MAUER = '#', WEG = ' ', MUENZE = ':', NL = '\n',
	EOS = '\0', ICH = 'X', GEIST = 'G'
};

using namespace std;

const int kZeilen = 11;
const int kSpalten = 11;
const int kAnzGeister = 3;





class Labyrinth {
public:

	int labZeilen;
	int labSpalten;
	int labAnzGeitser;
	int muenze;
	char lab[kZeilen][kSpalten];





	//Konstruktor
	Labyrinth()
	{
		muenze = 0;
		labZeilen = kZeilen;
		labSpalten = kSpalten;
		labAnzGeitser = kAnzGeister;
		initialisieren();


	}



	//Get-Methoden
	int getZeilen()
	{
		return labZeilen;
	}

	int getSpalten()
	{
		return labSpalten;
	}

	int getAnzGeitser()
	{
		return labAnzGeitser;
	}

	int getMuenzen()
	{
		return muenze;
	}


	void initialisieren() {
		/* HIER */
		for (int i = 0; i < kZeilen; i++) {
			for (int j = 0; j < kSpalten; j++) {
				lab[i][j] = MAUER;
			}
		}

		for (int i = 0; i < kZeilen; i++) {
			lab[i][kSpalten] = NL;
		}

		for (int i = 0; i < kSpalten; i++) {
			lab[i][kSpalten + 1] = EOS;
		}

		lab[2][4] = WEG;
		lab[4][2] = WEG;
		lab[8][3] = WEG;









	}

	void zeichenChar(char c, Position pos)
	{
		lab[pos.posy][pos.posx] = 'c';
	}

	//Muenzen verteilen

	void legeMuenzen()
	{
		for (int i = 0; i < kZeilen; i++)
		{
			for (int j = 0; j < kSpalten; j++)
			{
				if (lab[i][j] == WEG)
				{
					lab[i][j] = MUENZE;
				}

			}
		}
	}

	//Zeichen neu
	void zeichenChar(char c, Position posalt, Position posneu)
	{
		zeichenChar(c, posneu);
		lab[posalt.posx][posalt.posy] = WEG;

	}

	//Zeichen einlesen
	char getZeichenAnPos(Position pos)
	{
		char erg = lab[pos.posx][pos.posy];
		return erg;
	}

	//Muenze checken
	bool istMuenzeAnPOs(Position pos)
	{
		bool erg;

		if (lab[pos.posx][pos.posy] == MUENZE)
		{
			erg = true;
			return erg;
		}
		else
		{
			erg = false;
			return erg;
		}
		return 0;
	}

	// Labyrinth auf dem Bildschirm ausgeben
	void drucken() {
		// Console frei machen
		system("cls");
		for (int i = 0; i < kZeilen; i++) {
			for (int j = 0; j < kSpalten + 2; j++) {
				cout << lab[i][j];
			}

		}





	}

	void erzeugen() {


		char c = 'x';
		int posx = kSpalten / 2;
		int posy = kZeilen / 2;
		lab[posy][posx] = ICH;
		drucken();
		while (c != 'q') {
			drucken();
			cout << "Laufen mit Pfeiltasten. Beenden mit q." << endl;
			lab[posy][posx] = WEG;
			c = _getch();
			switch (int(c)) {
				// oben
			case 72: posy = huren_max(1, posy - 1); break;
				// links
			case 75: posx = huren_max(1, posx - 1); break;
				// rechts
			case 77: posx = faggot_min(kSpalten - 2, posx + 1); break;
				// unten
			case 80: posy = faggot_min(kZeilen - 2, posy + 1); break;
				// q = quit
			case 113: break;
			}
			lab[posy][posx] = ICH;
		}
	}




};