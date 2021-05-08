#include <iostream>
#include "Circle.hpp"
#include "Point.hpp"

using namespace std;

Circle::Circle(Point p) {
	radius = 0;
	centre = p;
}
Point Circle::getCentre() {
	return centre;
}

double Circle::getRadius() {
	return radius;
}

void Circle::setCentre(Point a) {
	centre = a;
}

void Circle::setRadius(double r) {
	radius = r;
}

void Circle::move(double dx, double dy) {
	centre.setX(dx + centre.getX());
	centre.setY(dy + centre.getY());
}

void Circle::print(bool x) {
	cout << "<" << "(" << centre.getX() << ", " << centre.getY() << ")," << getRadius() << ">";
	if (x == true) {
		cout << endl;
	}
}