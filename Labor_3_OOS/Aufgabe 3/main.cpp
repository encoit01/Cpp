#include <iostream>
#include "Circle.hpp"
#include "Polygonline.hpp"
using namespace std;

// Hauptprogramm
int main(void) {
	string str1("(1.1,2.1)");
	string str2("<(5.5, 6.6), 10.1>");
	string str3("|(1.1,1.2) - (2.1, 2.2) -(3.1,3.2) |");
	Point p(str1);
	Circle c(str2);
	Polygonline l(str3);

	cout << p.toString() << endl;
	cout << c.toString() << endl;
	c.move(1.0, 2.0);
	cout << c.toString() << endl;
	cout << l.toString() << endl;

	string str4;
	cin >> str4;
	Point p2(str4);
	string str5;
	cin >> str5;
	Circle c2(str5);
	string str6;
	cin >> str6;
	Polygonline l2(str6);

	cout << p2.toString() << endl;
	cout << c2.toString() << endl;
	cout << l2.toString() << endl;
	return 0;
}