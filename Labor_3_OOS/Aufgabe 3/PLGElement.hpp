#include "Point.hpp"

class PlgElement {
private:
	Point point;
	PlgElement *next;
public:
	PlgElement() {
		next = nullptr;
		point = Point(0, 0);
	}
	PlgElement(Point p) {
		point = p;
		next = nullptr;
	}
	PlgElement(PlgElement &o) {
		point = o.getpoint();
		if (o.getnext() != nullptr) {
			next = new PlgElement(o.getnext()->point);
		}
	}
	~PlgElement() {
		if (next != nullptr) {
			delete next;
			next = nullptr;
		}
	}
	const Point &getpoint() const {
		return point;
	}
	PlgElement *getnext() const {
		return next;
	}
	void setnext(PlgElement *n) {
		next = n;
	}
	void move(double dx, double dy) {
		PlgElement *r = this;
		while (r != nullptr) {
			r->point.move(dx, dy);
			r = r->getnext();
		}
	}
};