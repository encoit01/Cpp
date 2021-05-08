#pragma once
#include "Point.hpp"

class Circle {
	private:
		Point centre;
		double radius;

	public:
		Circle(Point p);
		Point getCentre();
		double getRadius();
		void setCentre(Point a);
		void setRadius(double r);
		void move(double dx, double dy);
		void print(bool x = true);


};