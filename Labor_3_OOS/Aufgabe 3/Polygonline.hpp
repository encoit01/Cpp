#pragma once
#include "PLGElement.hpp"
class Polygonline {
private:
	PlgElement *start;
	PlgElement *end;
public:
	Polygonline() {

		start = nullptr;
		end = nullptr;
	}
	Polygonline(Point p) {
		start = new PlgElement(p);
		end = start;
	}
	Polygonline(string str) {
		stringstream buf(str);
		buf >> *this;
	}

	Polygonline &addPoint(const Point p) {
		if (end == nullptr) {
			start = new PlgElement(p);
			end = start;
		}
		else {
			end->setnext(new PlgElement(p));
			end = end->getnext();
		}
		return *this;
	}
	void print() const {
		cout<<toString();
	}
	string toString() const
	{
		stringstream buf;
		PlgElement *r = start;
		buf << "|";
		while (r != nullptr) {
			Point p = r->getpoint();
			buf<<p.toString();
			r = r->getnext();
			if (r != nullptr) {
				buf << " - ";
			}
		}
		buf << "|" << endl;
		return buf.str();
	}
	void appendPolygonline(const Polygonline &l) {
		if (end != nullptr) {

			end->setnext(new PlgElement(*l.start));
		}
		else {
			start = new PlgElement(*l.start);
		}
		while (end->getnext() != nullptr) {
			end = end->getnext();
		}
	}
	void move(double x, double y) {

		if (start != nullptr) {
			start->move(x, y);
		}
	}
	~Polygonline() {
		delete start;
	}
	friend istream &operator>>(istream &is, Polygonline &pl) {
		char _;
		is >> _;
		//|(1.1,2.2) - (2.1, 2.2) -(4.2,4.3)|
		do {
			if ('|' == _ || '-' == _) {
				Point p;
				is >> p;
				pl.addPoint(p);
			}
			is>>_;
		} while ('|' != _);
		return is;
	}
};
