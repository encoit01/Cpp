#pragma once
#include "PlgElement.hpp"
#include "Circle.hpp"
#include "OneDimObjekt.hpp"

class Polygonline : public OneDimObject
{
public:
	friend ostream &operator<<(ostream& stream, const Polygonline&pl);
	Polygonline operator+(const Point &p);
	Polygonline operator+(const Polygonline &pl);
	Polygonline();
	Polygonline(const Point &tmpPoint);
	Polygonline(string tempString);
	~Polygonline();
	Polygonline & addPoint(Point tmpPoint);
	void appendPolygonline(Polygonline tmpLine);
	void move(double dx, double dy);
	string toString()const;
	void print(bool)const;

private:
	PlgElement * start;
	PlgElement * end;
};
