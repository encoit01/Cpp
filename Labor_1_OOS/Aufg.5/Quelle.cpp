#define _USE_MATH_DEFINES
#include <iostream>
#include <iomanip>
#include <cmath>


using namespace std;
float a;
float b;
float c;
float y;
int was;

float trapezFlaeche(float a, float b = 0.0, float c = 0.0, float y= 90) {
	if (b == 0.0) {
		b = a;
	}
	if (c == 0.0) {
		c = a;
	}
	
	y = (y / 180) * M_PI;
	float erg = 0.5* (a + c)*b*sin(y);
	return erg;
}




int main(void) {
	cout << " Drücke 1 für Quadrat, 2 für Rechteck, 3 für Parallelogramm, 4 für Trapez";
	cin >> was;

	if (was == 1) {
		cout << "A eingeben: ";
		cin >> a;
		cout << "Flächeninhalt: "<< trapezFlaeche(a);
	}
	else if (was == 2) {
		cout << "A eingeben: ";
		cin >> a;
		cout << "B eingeben: ";
		cin >> b;
		cout << "Flächeninhalt: "<< trapezFlaeche(a, b);
	}
	else if (was == 3) {
		cout << "A eingeben: ";
		cin >> a;
		cout << "B eingeben: ";
		cin >> b;
		cout << "WInkel eingeben: ";
		cin >> y;
		cout << "Flächeninhalt: "<< trapezFlaeche(a, b, y);
	}
	else if (was == 4) {
		cout << "A eingeben: ";
		cin >> a;
		cout << "B eingeben: ";
		cin >> b;
		cout << "C eingeben: ";
		cin >> c;
		cout << "Winkel eingeben: ";
		cin >> y;
		cout <<"Flächeninhalt: "<< trapezFlaeche(a, b, c, y);
	}
	return 0;
}
