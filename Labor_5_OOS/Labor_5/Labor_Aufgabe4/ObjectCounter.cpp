#include "ObjectCounter.hpp"

ObjectCounter::ObjectCounter() :id(maxId+1)
{
	maxId++;
	number++;
}

ObjectCounter::~ObjectCounter()
{
	number--;
}