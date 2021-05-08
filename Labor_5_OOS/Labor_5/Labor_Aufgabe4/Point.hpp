#pragma once
#include <iostream>
#include <sstream>
#include "DrawingObject.hpp"

using namespace std;

class Point : public DrawingObject
{
public:
	Point(double tempX = 0, double tempY = 0) :x(tempX), y(tempY){}
	Point(string temp);
	~Point();
	friend istream &operator >> (istream& stream, Point& p);
	friend ostream &operator<<(ostream& stream, const Point&p );
	Point operator-()const;
	Point & operator++();
	Point operator++(int);
	Point & operator=(const Point param);
	
protected:
	double x;
	double y;
public:
	static double toDouble(const string &temp);
	double getX()const;
	double getY()const;
	void setX(double tempX);
	void setY(double tempY);
	void move(double dx, double dy);
	void print(bool  = false)const;
	string toString()const;	

};
const Point operator+(double d, Point const& p);
Point operator+(const Point& p, double d);
Point operator+(const Point& p1, const Point& p2);
Point operator-(const Point& p1, const Point& p2);