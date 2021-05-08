#ifndef MYSTRING_H
#define MYSTRING_H 
#pragma once


#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

class MyString {
private:
	char* strPtr;
	unsigned int strCap;
	unsigned int strSiz;
	char hack;

public:

	MyString();
	MyString(const char wort[]);
	MyString(const MyString& str);
	~MyString();
	void reserve(unsigned int);
	MyString& append(const MyString& str);
	MyString& assign(const MyString& str);
	char* c_str();
	unsigned int getSize();
	unsigned int getCapacity();
	void clear();
	bool empty();
	char& at(unsigned int);
	friend MyString operator+(const MyString& left, const MyString& right);
	bool operator==(MyString str);
	char operator[](int i);
	MyString& operator=(const MyString& str);
	friend ostream& operator<<(ostream& os, const MyString& myStr);
};
#endif