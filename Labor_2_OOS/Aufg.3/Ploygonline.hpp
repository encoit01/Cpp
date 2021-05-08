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

	Polygonline& addPoint(Point p) {
		if (end == nullptr) {
			start = new PlgElement(p);
			end = start;
		}
		else {
			end->next = new PlgElement(p);
			end = end->next;
		}
		return *this;
	}
	void print() {
		PlgElement *r = start;
		cout << "|";
		while (r != nullptr) {
			Point p = r->getpoint();
			p.print(false);
			r = r->getnext();
			if (r != nullptr) {
				cout << " - ";
			}
		}
		cout << "|" << endl;
	}
	void appendPolygonline(Polygonline &l) {
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
};
