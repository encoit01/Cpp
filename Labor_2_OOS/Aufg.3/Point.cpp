#include <iostream>
#include "Circle.hpp"
#include "Point.hpp"

using namespace std;

Point::Point(double i, double r) {
	x = i;
	y = r;
}
double Point::getX() {
	return x;
}

double Point::getY() {
	return y;
}

void Point::setX(double r) {
	x = r;
}

void Point::setY(double t) {
	y = t;
}

void Point::move(double dx, double dy) {
	setX(x + dx);
	setY(y + dy);
}

void Point::print(bool x) {
	cout << "(" << getX() << ", " << getY() << ")";
	if (x == true) {
		cout << endl;
	}
}

