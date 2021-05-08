#pragma once
#include "Point.hpp"


Point::Point(string tempParam):DrawingObject(){
	if (debugConstructor){ cout << "Konstruktor der Klasse Point, Objekt:" << ObjectCounter::getId() << endl; }

	unsigned int j = 0;
	for (unsigned int i = 0; i < tempParam.size(); ++i)
	if (tempParam[i] != ' ')
		tempParam[j++] = tempParam[i];
	tempParam.resize(j);
	int anfang = tempParam.find('(') + 1;
	int ende = tempParam.find(',');
	x = toDouble(tempParam.substr(anfang, ende));
	anfang = ende + 1;
	ende = tempParam.find(')');
	y = toDouble(tempParam.substr(anfang, ende));
}

Point::~Point()
{
	if (debugConstructor){ cout << "Destruktor der Klasse Point, Objekt:" << ObjectCounter::getId() << endl; }

}

double Point::getX()const{
	return x;
}
double Point::getY()const{
	return y;
}
void Point::setX(double tempX){
	x = tempX;
}
void Point::setY(double tempY){
	y = tempY;
}
void Point::move(double dx, double dy){
	x += dx;
	y += dy;
}
void Point::print(bool doEndl)const{
	cout << "(" << x << ", " << y << ")";
	if (doEndl == true){
		cout << endl;
	}
}
string Point::toString()const{
	ostringstream ost; 
	ost << "(" << x << ", " << y << ")";
	return ost.str();
}
double Point::toDouble(const string &temp){
	std::istringstream i(temp);
	double value;
	if (!(i >>value))
		return 0;
	return value;
}
istream &operator >> (istream& stream, Point& p) {
	string temp;
	stream >>skipws>> temp;
	int anfang = temp.find('(') + 1;
	int ende = temp.find(',') - 1;
	p.setX(p.toDouble(temp.substr(anfang,ende)));
	anfang = ende + 1;
	ende = temp.find(')') - 1;
	p.setY(p.toDouble(temp.substr(anfang,ende)));
	return stream;
}
ostream &operator<<(ostream& stream, const Point&p){
	return stream << p.toString();
}

const Point operator+(double d, Point const& p) {
	return Point(p.getX() + d, p.getY() + d);
}
Point operator+(const Point& p, double d) {
	return Point(p.getX() + d, p.getY() + d);
}
Point operator+(const Point& p1, const Point& p2){
	return Point(p1.getX() + p2.getX(), p1.getY() + p2.getY());
}
Point operator-(const Point& p1, const Point& p2){
	return Point(p1.getX()-p2.getX(),p1.getY()-p2.getY());
}
Point Point::operator-()const{
	return Point(this->x*(-1), this->y*(-1));
}
Point &Point::operator++() {
	++x; 
	++y; 
	return *this;
}
Point Point::operator++(int) {
	Point p = *this;
	x++; 
	y++;
	return p;
}
Point & Point::operator=(const Point param){
	x = param.getX();
	y = param.getY();
	return *this;
}
