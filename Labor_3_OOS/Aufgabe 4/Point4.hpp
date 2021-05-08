#pragma once

#include <iostream>
#include <sstream>
#include <istream>
using namespace std;

class Point {
private:
	double x;
	double y;
public:
	Point(double xx = 0, double yy = 0) {
		x = xx;
		y = yy;
	}
	Point(string str) {
		stringstream buf(str);
		buf >> *this;
	}
	double getx() const
	{
		return x;
	}
	double gety() const
	{
		return y;
	}
	void setx(double i)
	{
		x = i;
	}
	void sety(double w)
	{
		y = w;
	}
	void move(double dx, double dy)
	{
		x += dx;
		y += dy;
	}
	void print(bool a = true) const
	{

		cout << toString();
		if (a != false) {
			cout << endl;
		}
	}
	string toString() const
	{
		stringstream buf;
		buf << "(" << getx() << ", " << gety() << ")";
		return buf.str();
	}
	friend istream &operator>>(istream &is, Point &p)
	{
		char c;
		//(1.1, 2.2)
		do
		{
			is >> c;
			if (c == '(') {
				is >> p.x;
			}
			if (c == ',') {
				is >> p.y;
			}
		} while (c != ')');
		return is;
	}
	friend ostream &operator<<(ostream &os,const Point &p) {
		return os << p.toString();
	}
	//(p1+p2+p3)
	Point operator+(Point p2) { 
		p2.move(x,y);
		return p2;
	}
	Point operator-(Point p1){
		Point p2(-p1);
		p2.move(x,y);
		return p2;
	}
	Point operator-(){
		Point p1;
		p1.move(-x,-y);
		return p1;
	}
	Point operator+(const double a){
		Point p1(*this);
		p1.move(a,a);
		return p1;
	}
	friend Point operator+(double a,Point p) {
		p.move(a,a);
		return p;
	}
	Point &operator++() {
		move(1, 1);
		return *this;
	}
	Point operator++(int){
		Point p1(*this);
		operator++();
		return p1;
	}

};