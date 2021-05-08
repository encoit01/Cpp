#pragma once
#include<iostream> 
extern bool debugConstructor;
using namespace std;
class ObjectCounter
{
public:
	ObjectCounter();
	~ObjectCounter();

	unsigned int getId(){ return id; };
	unsigned int getMaxId(){ return maxId; };
	static unsigned int getNumber(){ return number; };
protected:
	const unsigned int id;
	static unsigned int maxId;
	static unsigned int number;

};
