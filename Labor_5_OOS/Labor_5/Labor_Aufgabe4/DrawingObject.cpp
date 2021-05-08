#include "DrawingObject.hpp"

DrawingObject::DrawingObject():ObjectCounter()
{
	if (debugConstructor == true) {
		cout << "Konstruktor der Klasse DrawingObject, Objekt:" << this->getId() << endl;
	}


}
DrawingObject::~DrawingObject()
{
	if (debugConstructor == true) {
		cout << "Destruktor der Klasse DrawingObject, Objekt:" << this->getId() << endl;
	}
}