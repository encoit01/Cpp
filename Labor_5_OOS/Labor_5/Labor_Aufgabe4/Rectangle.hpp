#include "OneDimObjekt.hpp"
#include "Point.hpp"

class Rectangle:public OneDimObject
{
public:
	Rectangle(const Point& p1 = Point(0, 0), const Point& p2 = Point(1, 1));
	~Rectangle();
	void print(bool = false) const;
private:
	Point p1;
	Point p2;

};