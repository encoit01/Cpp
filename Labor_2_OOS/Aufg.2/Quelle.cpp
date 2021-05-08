#include "Fifo.hpp"
#include <stdlib.h>


Fifo::Fifo(int i) {
	ptr = new char[i];
	maxSize = i;
	Number = 0;
	wPos = 0;
	rPos = 0;
}

Fifo::~Fifo() {
	delete ptr;
}

int Fifo::getwPos() {
	return wPos;
}

int Fifo::getrPos() {
	return rPos;
}

bool Fifo::isEmpty() {
	if (Number == 0) {
		return true;
	}
	else {
		return false;
	}
}

bool Fifo::isFull() {
	if (Number == maxSize) {
		return true;
	}
	else {
		return false;
	}
}
int Fifo::push(char s){
	if (!isFull() && wPos != maxSize){
		ptr[wPos] = s;
		wPos = wPos + 1;
			Number++;
		return wPos -1;
		
	}
	else if(!isFull() && wPos == maxSize){
		wPos = 0;
		ptr[wPos] = s;
		wPos = wPos +1;
		Number++;
		return wPos -1;
	}
	else if(isFull()){
		return -1;

	}
	return 0;
}

char Fifo::pop() {
	if (isEmpty()) {
		return '\0';
	}
	else if (!isEmpty()) {
		Number--;
		rPos = rPos + 1;
		return ptr[rPos - 1];
	}
	return 0;
}
