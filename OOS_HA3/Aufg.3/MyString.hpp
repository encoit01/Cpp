#pragma once

#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

class MyString {
	friend MyString operator+(const MyString, const MyString);
private:


public:
	char *strPtr;
	unsigned int strCap;
	unsigned int strSiz;
	char hack;
	MyString();
	MyString(const char wort[]);
	MyString(MyString & str);
	~MyString();
	void reserve(unsigned int);
	MyString & append(MyString & str);
	MyString & assign(const MyString & str);
	char *c_str();
	unsigned int size();
	unsigned int capacity();
	void clear();
	bool empty();
	char& at(unsigned int);
	MyString& operator=(MyString);

};


