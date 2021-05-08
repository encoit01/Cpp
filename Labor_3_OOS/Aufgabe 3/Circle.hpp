#pragma once

#include "Point.hpp"
class Circle {
private:
	Point centre;
	double radius;
public:
	Circle(Point p = Point()) {
		radius = 0;
		centre = p;
	}
	Circle(string str) {
		stringstream buf(str);
		buf >> *this;
	}
	double getradius() const
	{
		return radius;
	}
	Point getcentre() const 
	{
		return centre;
	}
	void setradius(double r)
	{
		radius = r;
	}
	void setcentre(Point P)
	{
		centre = P;
	}
	void move(double dx, double dy) {
		centre.move(dx, dy);
	}
	void print(bool a = true) const
	{
		cout<<this->toString();
		if (a = true) {
			cout << endl;
		}
	}
	string toString() const 
	{
		stringstream buf;
		buf <<"<(" << centre.getx() << ", " << centre.gety() << "), " << getradius() << ">";
		return buf.str();
	}
	friend istream &operator>>(istream &is, Circle &c)
	{
		char _;
		//<(1.1, 2.2), 10.1>
		do
		{
			is >> _;
			if (_ == '<') {
			is >> c.centre;
			}
			if (_ == ',') {
				is >> c.radius;
			}
		} while (_ != '>');
		return is;
	}
};