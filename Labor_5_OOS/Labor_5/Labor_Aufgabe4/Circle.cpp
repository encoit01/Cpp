#include "Circle.hpp"
Circle::~Circle()
{
	if (debugConstructor){ cout << "Destruktor der Klasse Circle, Objekt: " << ObjectCounter::getId() << endl; }
}

Circle::Circle(string &temp){
	if (debugConstructor){ cout << "Konstruktor der Klasse Circle, Objekt: " << ObjectCounter::getId() << endl; }
	unsigned int j = 0;
	for (unsigned int i = 0; i < temp.size(); ++i)
	if (temp[i] != ' ')
		temp[j++] = temp[i];
	temp.resize(j);
	int anfang, ende;
	anfang = temp.find('(') - 1;
	ende = temp.find(')') + 1;
	centre = Point(temp.substr(anfang, ende));
	anfang = temp.find_last_of(',') + 1;
	ende = temp.find('>') - 1;
	radius = Point::toDouble(temp.substr(anfang, ende));
}
double Circle::getRadius()const{
	return radius;
}
Point Circle::getCentre()const{
	return centre;
}
void Circle::setRadius(double tempRadius){
	radius = tempRadius;
}
void Circle::setCentre(Point tempCentre){
	centre = tempCentre;
}
void Circle::move(double dx, double dy){
	centre.setX(centre.getX() + dx);
	centre.setY(centre.getY() + dy);
}
void Circle::print(bool doEndl)const{
	cout << "<(" << centre.getX() << ", " << centre.getY() << "), " << radius << ">";
	if (doEndl == true){
		cout << endl;
	}
}
string Circle::toString()const{
	ostringstream ost;
	ost << "<(" << centre.getX() << ", " << centre.getY() << "), " << getRadius() << ">";
	return ost.str();
}
ostream &operator<<(ostream& stream, const Circle&c){
	return stream << c.toString();
}