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
	cout << " Dr�cke 1 f�r Quadrat, 2 f�r Rechteck, 3 f�r Parallelogramm, 4 f�r Trapez";
	cin >> was;

	if (was == 1) {
		cout << "A eingeben: ";
		cin >> a;
		cout << "Fl�cheninhalt: "<< trapezFlaeche(a);
	}
	else if (was == 2) {
		cout << "A eingeben: ";
		cin >> a;
		cout << "B eingeben: ";
		cin >> b;
		cout << "Fl�cheninhalt: "<< trapezFlaeche(a, b);
	}
	else if (was == 3) {
		cout << "A eingeben: ";
		cin >> a;
		cout << "B eingeben: ";
		cin >> b;
		cout << "WInkel eingeben: ";
		cin >> y;
		cout << "Fl�cheninhalt: "<< trapezFlaeche(a, b, y);
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
		cout <<"Fl�cheninhalt: "<< trapezFlaeche(a, b, c, y);
	}
	return 0;
}
