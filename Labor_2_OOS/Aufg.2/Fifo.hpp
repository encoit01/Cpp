#pragma once

class Fifo {
	public:
		int maxSize;
		int Number;
		char* ptr;
		int wPos;
		int rPos;

		Fifo(int i = 20);
		~Fifo();
		int getwPos();
		int getrPos();
		bool isEmpty();
		bool isFull();
		int push(char s);
		char pop();

};
