#include <iostream>
#include "Circle.hpp"
#include "Point.hpp"
using namespace std;
// Hauptprogramm
/*
int main(void)
{
	Point p;
	Circle c(p);
	cout << "Ausgabe 1:" << endl;
	p.print();
	c.print();
	p.setX(1.1);
	p.setY(2.2);
	c.setCentre(p);
	c.setRadius(3.3);
	cout << "Ausgabe 2:" << endl;
	p.print(false);
	cout << " == (" << p.getX() << ", " << p.getY() << ")" << endl;
	c.print();
	p.move(1.0, 1.0);
	c.move(2.0, 2.0);
	cout << "Ausgabe 3:" << endl;
	p.print();
	c.print();
	return 0;
}
*/

#include <iostream>
#include "Ploygonline.hpp"
using namespace std;
// Hauptprogramm
int main(void)
{
	Point p1(1, 1), p2(2, 2), p3(3, 3), p4(4, 4), p5(5, 5);
	Polygonline l1;
	Polygonline l2(p3);
	cout << "Ausgabe 1:" << endl;
	l1.print();
	l2.print();
	l1.addPoint(p1).addPoint(p2);
	l2.addPoint(p4).addPoint(p5);
	cout << "Ausgabe 2:" << endl;
	l1.print();
	l2.print();
	p2.move(0.5, 0.5);
	cout << "Ausgabe 3:" << endl;
	p2.print();
	l1.print();
	l2.print();
	l1.appendPolygonline(l2);
	cout << "Ausgabe 4:" << endl;
	l1.print();
	l2.print();
	l1.move(0, 0.5);
	cout << "Ausgabe 5:" << endl;
	l1.print();
	l2.print();
	return 0;
}