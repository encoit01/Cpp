#include "Polygonline.hpp"
#include <string>
#include <sstream>

Polygonline::Polygonline()
{
	start = NULL;
	end = NULL;
}
Polygonline::Polygonline(string tempParam){
	if (debugConstructor){ cout << "Konstruktor der Klasse Polygonline , Objekt:" << ObjectCounter::getId() << endl; }
	start = NULL;
	end = NULL;
	int anfang, ende;
	
	int j = 0;
	for (unsigned int i = 0; i < tempParam.size(); ++i)
	if (tempParam[i] != ' ')
		tempParam[j++] = tempParam[i];
	tempParam.resize(j);
	
	anfang = tempParam.find('(') + 1;
	ende = tempParam.find(')')-1;
	start = new PlgElement(Point(tempParam.substr(anfang, ende))); //Konstruktor und destruktor aufruf
	end = start;
	
	while (tempParam.find('-')<tempParam.size())
	{
		tempParam.erase(0, tempParam.find('-')+1);
		anfang = tempParam.find('(');
		ende = tempParam.find(')');
		this->addPoint(Point(tempParam.substr(anfang, ende)));
	}
}

Polygonline::Polygonline(const Point &tmpPoint) : start(new PlgElement(tmpPoint)){
	end = start;
	if (debugConstructor){ cout << "Konstruktor der Klasse Polygonline , Objekt:" << ObjectCounter::getId() << endl; }
}
Polygonline::~Polygonline(){
	if (debugConstructor){ cout << "Destruktor der Klasse Polygonline , Objekt:" << ObjectCounter::getId() << endl; }
}

Polygonline&Polygonline::addPoint(Point tmpPoint){
	if (start == NULL)
	{
		start = new PlgElement(tmpPoint);
		end = start;
	}
	else{
		end->next = new PlgElement(tmpPoint);
		end = end->next;
	}
	return *this;
}

void Polygonline::appendPolygonline(Polygonline tmpLine){
	PlgElement * tmpEnd = tmpLine.start;
	while (tmpEnd)
	{
		end = end->next;
		end->next = new PlgElement(tmpEnd->point);		
		tmpEnd = tmpEnd->next;
	}
}
void Polygonline::move(double tmpDx, double tmpDy){
	PlgElement * tmpPrinter = start;
	while (tmpPrinter){
		tmpPrinter->point.move(tmpDx, tmpDy);
		tmpPrinter = tmpPrinter->next;
	}
}

string Polygonline::toString() const {
		ostringstream ost; 
		PlgElement * tmpPrinter = start;
		ost << "|";
		if (tmpPrinter != NULL){
			while (tmpPrinter){
				ost << "(" << tmpPrinter->point.getX() << ", " << tmpPrinter->point.getY() << ")";
				(tmpPrinter->next) ? ost << " - " : ost << "|" << endl;
				tmpPrinter = tmpPrinter->next;
			}
		}
		else
		{
			ost << "|" << endl;
		}
		
		return ost.str();	
}
void Polygonline::print(bool doEndl)const{
	PlgElement * tmpPrinter = start;
	cout << "|";
	if (tmpPrinter != NULL){
		while (tmpPrinter){
			tmpPrinter->point.print(false);
			(tmpPrinter->next) ? cout << " - " : cout << "|" << endl;
			tmpPrinter = tmpPrinter->next;
		}
	}
	else
	{
		cout << "|" << endl;
	}
}
ostream &operator<<(ostream& stream, const Polygonline&pl){
	return stream << pl.toString();
}
Polygonline Polygonline::operator+(const Point &p){
	this->addPoint(p);
	return *this;
}
Polygonline Polygonline::operator+(const Polygonline &pl){
	this->appendPolygonline(pl);
	return *this;
}
