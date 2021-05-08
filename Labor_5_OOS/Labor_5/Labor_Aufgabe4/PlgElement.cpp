#include <iostream>
#include "PlgElement.hpp"

PlgElement::PlgElement()
{
	next = NULL;
}
PlgElement::PlgElement(const Point &tempPoint){
	next = NULL;
	point = tempPoint;
}

PlgElement::~PlgElement()
{
}
