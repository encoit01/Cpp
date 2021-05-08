#include <iostream>
#include "Circle.hpp"
#include "Polygonline.hpp"
#include "Rectangle.hpp"
using namespace std;

bool debugConstructor = false;

unsigned int ObjectCounter::maxId = 0;
unsigned int ObjectCounter::number = 0;

int main() {
	DrawingObject * objects[20]; 
	int anzahl = 0; 
	cout << "Wieviele Objekte wollen Sie einlesen?" << endl; 
	cout << "Anzahl: "; 
	cin >> anzahl; 
	string s;
	for (int i = 0; i < anzahl; i++)
	{
		cin >> s;
		switch (s[0])
		{
		case '(':
			cout << "Ein Punkt"<<endl;
			objects[i] = new Point(s);
			break;
		case '<':
			cout << "Ein Kreis"<<endl;
			objects[i] = new Circle(s);
			break;
		case '|':
			cout << "Eine Polygonlinie"<<endl;
			objects[i] = new Polygonline(s);
			break;
		case'[':
			cout << "Ein Rechteck"<<endl;
			objects[i] = new Rectangle(s);
			break;
		default:
			cout << "Falsche eingabe" << endl;

		}
	}
	// Objekte ausgeben 
	for (int i=0; i<anzahl; i++) 
	{ // einzelnes Objekt ausgeben .... 
		
		if (objects[i]!=0)
		{
			objects[i]->print(true);
		}
	}
	
	
	return 0; 

}