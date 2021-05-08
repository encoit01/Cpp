#include "objectCounter.h"
#include <iostream>

int objectCounter::number = 0;
int objectCounter::maxId = 0;

int objectCounter::getId() {
	return id;
}

int objectCounter::getMaxId() {
	return maxId;
}

int objectCounter::getNumber() {
	return number;
}

objectCounter::objectCounter():id(number) {
	if (id > maxId) {
		maxId = id;
	}
	number = number + 1;
}


