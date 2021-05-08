/*

Spiel Tsching, Tschang, Tschong

Regeln:
Es gibt zwei Spieler: der Programmierer und der Computer.
Beide Spieler waehlen gleichzeitig eines der drei Objekte
Stein, Schere und Papier. Beide k�nnen das gleiche Objekt w�hlen.
Der Spieler, der das m�chtigere Objekt gew�hlt hat gewinnt.
SCHERE kann einen STEIN nicht zerschneiden, d.h. STEIN ist
m�chtiger als SCHERE. PAPIER wickelt STEIN ein, d.h. PAPIER ist
m�chtiger als STEIN. SCHERE zerschneidet PAPIER, d. h. SCHERE
ist maechtiger als PAPIER

*/

#include <cstdlib>
#include <cstring>
#include <ctime>
#include <iostream>
using namespace std;

// Aufz�hlungstyp f�r Stein etc.
enum objectType { STEIN, SCHERE, PAPIER };

// Struktur f�r einen Spieler bestehend aus Name und Wahl 
// des Spielers
struct player {
	char * name;
	objectType choice;
};

// Variable f�r den Namen des Spielers 
char name[15];

// Name des Spielers eingeben
char * enterName(char str[])
{
	cout << "Name eingeben: ";
	cin >> str;
	return str;
}

// Den Computer zuf�llig waehlen lassen. 
// Nutzen Sie srand(...) und rand().
objectType randomChoice()
{
	srand(static_cast<int>(time_t(NULL)));
	return(static_cast<objectType>(rand() % 3));
}

// Die Wahl von STEIN etc. als String zur�ckgeben lassen
char * object2str(objectType o)
{	
	char * wahl;
	if (o == STEIN) {
		return wahl = (char *)"Stein";
	}
	else if (o == SCHERE) {
		return wahl = (char *)"Schere";
	}
	else if (o == PAPIER) {
		return wahl = (char*)"Papier";
	}
}

// Einen Text mit dem Namen des Spielers und seiner Wahl ausgeben
void showPlayer(player p)
{
	cout << p.name << " hat gew�hlt:" << object2str(p.choice);
	cout << endl;

}

// Die Wahl des Spielers abfragen
objectType enterChoice()
{
	int i;
	cout << "Stein[0], Schere[1], Papier[2]:";
	cin >> i;
	cout << endl;
	return (static_cast<objectType>(i));
}

// Die Wahl bestimmen, die gewonnen hat
objectType winningObject(objectType obj1, objectType obj2)
{
	
	if(obj1 != obj2) {
		if (obj1 == SCHERE && obj2 == PAPIER) {
			return obj1;
		}
		else if (obj1 == PAPIER && obj2 == STEIN) {
			return obj1;
		}
		else if (obj1 == STEIN && obj2 == SCHERE) {
			return obj1;
		}
		else return obj2;
	}
	else cout << "Unentschieden";
}

// Ausgeben, wer gewonnen hat
void showWinner(player p1, player p2)
{
	
	if (winningObject(p1.choice, p2.choice) == p2.choice) {
		cout << p2.name << " hat gewonnen!";
	}
	else if (winningObject(p1.choice, p2.choice) == p1.choice) {
		cout << p1.name << " hat gewonnen!";
	}

}

int main()
{
	player player1, player2;
	player1.name = (char *)"Computer";
	player1.choice = randomChoice();
	cout << "Der Computer hat sein Wahl getroffen." << endl;
	player2.name = enterName(name);
	player2.choice = enterChoice();
	showPlayer(player1);
	showPlayer(player2);
	showWinner(player1, player2);
	return 0;
}

