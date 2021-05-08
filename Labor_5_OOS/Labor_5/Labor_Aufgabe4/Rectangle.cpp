#include "Rectangle.hpp"

Rectangle::~Rectangle()
{
}
Rectangle::Rectangle(const Point& p1, const Point& p2) {
	this->p1 = Point(p1);
	this->p2 = Point(p2);
}
void Rectangle::print(bool doEndl)const {
	cout << "[(" << p1.getX() << ", " << p1.getY() << "),(" << p2.getX() << "," << p2.getY() << ")]";
	if (doEndl == true) {
		cout << endl;
	}
}