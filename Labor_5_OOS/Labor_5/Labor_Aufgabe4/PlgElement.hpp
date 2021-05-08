#pragma once
#include "Point.hpp"
class PlgElement
{
public:
	PlgElement();
	PlgElement(const Point &tempPoint);
	~PlgElement();
	friend class Polygonline;

private:
	Point point;
	PlgElement * next;
};
