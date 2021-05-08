#pragma once

class Point {
	private:
		double x;
		double y;

	public:
		Point(double i = 0, double x = 0);
		double getX();
		double getY();
		void setX(double r);
		void setY(double t);
		void move(double dx, double dy);
		void print(bool x = true);

};
