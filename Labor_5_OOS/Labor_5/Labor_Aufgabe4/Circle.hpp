#pragma once
#include "Point.hpp"
#include "OneDimObjekt.hpp"


class Circle : public OneDimObject
{
public:
	Circle(const Point &tempCentre = Point(), double tempRadius = 0) :OneDimObject(),centre(tempCentre), radius(tempRadius) {}
	Circle(string &temp);
	friend ostream &operator<<(ostream& stream,const Circle&p);
	~Circle();
	
protected:
	Point centre;
	double radius;
public:
	double getRadius()const;
	Point getCentre()const;
	void setRadius(double);
	void setCentre(Point);
	void move(double, double);
	void print(bool doEndl = true)const;
	string toString()const;
};
