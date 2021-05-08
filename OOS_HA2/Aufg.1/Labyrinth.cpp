
#include "Labyrinth.hpp"
#include <iostream>
using namespace std;



void Labyrinth::initialisieren()
{
	for (int i = 0; i < kZeilen; i++) {
		for (int j = 0; j < kSpalten; j++) {
			labyrinth[i][j] = MAUER;
		}
	}
	for (int i = 0; i < kZeilen; i++) {
		labyrinth[i][kSpalten] = NL;
	}
	for (int i = 0; i < kSpalten; i++) {
		labyrinth[i][kSpalten + 1] = EOS;
	}
}

void Labyrinth::drucken()
{
	system("cls");
	for (int i = 0; i < kZeilen;i++) {
		for (int j = 0; j < kSpalten + 1; j++) {
			cout << labyrinth[i][j];
		}

	}
	Labyrinth::legeMuenzen();

}

void Labyrinth::erzeugen()
{
	char c = 'x';
	int posx = kSpalten / 2;
	int posy = kZeilen / 2;
	labyrinth[posy][posx] = ICH;
	drucken();
	while (c != 'q') {
		drucken();
		cout << "Laufen mit Pfeiltasten. Beenden mit q." << endl;
		labyrinth[posy][posx] = WEG;
		c = _getch();
		switch (int(c)) {
			// oben
		case 72: posy = max(1, posy - 1); break;
			// links
		case 75: posx = max(1, posx - 1); break;
			// rechts
		case 77: posx = min(kSpalten - 2, posx + 1); break;
			// unten
		case 80: posy = min(kZeilen - 2, posy + 1); break;
			// q = quit
		case 113: break;
		}
		labyrinth[posy][posx] = ICH;

	}
}

	Labyrinth::Labyrinth()
	{
		labSpalten = kSpalten;
		labZeilen = kZeilen;
		labAnzGeister = kAnzGeister;
		muenzen = 0;
		initialisieren();
	}

	int Labyrinth::getZeilen()
	{
		return labZeilen;
	}

	int Labyrinth::getSpalten()
	{
		return labSpalten;
	}

	int Labyrinth::getAnzGeister()
	{
		return labAnzGeister;
	}

	int Labyrinth::getMuenzen()
	{
		return muenzen;
	}

	void Labyrinth::legeMuenzen()
	{
		for (int i = 0; i < kZeilen; i++) {
			for (int j = 0; j < kSpalten; j++) {
				if (labyrinth[i][j] == WEG)
				{
					labyrinth[i][j] = MUENZE;
					muenzen++;
				}
			}
		}
		
	}

	void Labyrinth::zeichneChar(char c, Position pos)
	{
		labyrinth[pos.posx][pos.posy] = c;
	}
	
	void Labyrinth::zeichneChar(char c, Position posalt, Position posneu)
	{
		zeichneChar(c, posneu);
		labyrinth[posalt.posx][posalt.posy] = WEG;
	}

	char Labyrinth::getZeichenAnPos(Position pos)
	{
		char erg = labyrinth[pos.posx][pos.posy];
		return erg;
	}

	bool Labyrinth::istMuenzeAnPos(Position pos)
	{
		if (labyrinth[pos.posx][pos.posy] == MUENZE)
		{
			return true;
		}
		else
		{
			return false;
		}
	}