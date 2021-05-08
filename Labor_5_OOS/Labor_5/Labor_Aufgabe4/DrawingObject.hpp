
//Vererbung.hpp
//Autor: Steven Alani Sadiq s.sadiq@stud.hs-esslingen.de
//Start: 03.06.14  Bis 
//Aufwand: ca. 
//Fertigstellung: 
#pragma once
#include "ObjectCounter.hpp"

class DrawingObject : public ObjectCounter
{
	
public:
	DrawingObject();
	~DrawingObject();
	static unsigned int getNumber(){ return ObjectCounter::getNumber(); }
	virtual void print(bool = false) const = 0;
private:

};
