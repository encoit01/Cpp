#define _CRT_SECURE_NO_WARNINGS
#include "MyString.hpp"
#include <iostream>

using namespace std;

MyString::MyString()
{
	strSiz = 0;
	strCap = 0;
	strPtr = new char[strCap + 1];
	strPtr[0] = '\0';
}

MyString::MyString(const char wort[])
{
	strSiz = strlen(wort);
	strCap = strSiz;
	strPtr = new char[strCap + 1];
	strncpy(strPtr, wort, strCap + 1);
}

MyString::MyString(MyString & str)
{
	strSiz = str.strSiz;
	strCap = strSiz;
	strPtr = new char[strCap + 1];
	strncpy(strPtr, str.strPtr, strCap + 1);
}

MyString::~MyString()
{
	delete[] strPtr;
}

void MyString::reserve(unsigned int c)
{
	if (strCap > c)
	{
		cout << "Kapazität ist größer als Wert";
	}
	else
	{
		strCap = c;
		char* tmp = new char[strCap + 1];
		strncpy(tmp, strPtr, strCap + 1);
		delete[] strPtr;
		strPtr = tmp;
	}
}

MyString& MyString::append(MyString & str)
{
	unsigned int erg = strCap + str.strCap;
	reserve(erg);
	strncat(strPtr, str.strPtr, strCap + 1);

	return *this;

}
MyString& MyString::assign(const MyString & str)
{
	strCap = str.strCap;
	strSiz = str.strSiz;
	strPtr = new char[strCap + 1];
	strcpy(strPtr, str.strPtr);

	return *this;

}

char* MyString::c_str()
{
	return strPtr;
}

unsigned int MyString::size()
{
	unsigned int size = strSiz;
	return size;
}

unsigned int MyString::capacity()
{
	unsigned int cap = strCap;
	return cap;
}

void MyString::clear()
{
	strSiz = 0;
	strCap = 0;
	strPtr[0] = '\0';
}

bool MyString::empty()
{
	return strSiz == 0;
}

char & MyString::at(unsigned int stellen)
{
	if (stellen > strCap)
	{
		hack = '\0';
		return hack;
	}

	return strPtr[stellen];
}

MyString operator+(const MyString s, const MyString x) {
	MyString l;
	int size = sizeof(s) + sizeof(x);
	l.strPtr = new char[size];
	strcpy(l.strPtr, strcat(s.strPtr, x.strPtr));
	return l;
}
MyString & MyString::operator=(MyString t) {
	this->assign(t);
}
