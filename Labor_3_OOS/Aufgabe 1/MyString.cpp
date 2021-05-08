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
	hack = '\0';
}

MyString::MyString(const char wort[])
{
	strSiz = strlen(wort);
	strCap = strSiz;
	strPtr = new char[strCap + 1];
	strncpy(strPtr, wort, strCap + 1);
}

MyString::MyString(const MyString & str)
{
	strSiz = str.strSiz;
	strCap = strSiz;
	strPtr = new char[strCap + 1];
	strncpy(strPtr, str.strPtr, strCap + 1);
	hack = '\0';
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

MyString& MyString::append(const MyString & str)
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

unsigned int MyString::getSize()
{
	unsigned int size = strSiz;
	return size;
}

unsigned int MyString::getCapacity()
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

char& MyString::at(unsigned int stellen)
{
	if (stellen > strCap)
	{
		hack = '\0';
		return hack;
	}

	return strPtr[stellen];
}

MyString operator+(const MyString& left, const MyString& right)
{
	MyString tempStr(left);
	tempStr.append(right);
	return tempStr.strPtr;
}

bool MyString::operator==(MyString str)
{
	if (strSiz == str.strSiz && strcmp(strPtr, str.strPtr) == 0)
		return true;
	else
		return false;
}

char MyString::operator[](int i)
{
	return strPtr[i];
}

MyString& MyString::operator=(const MyString &str)
{
	assign(str);
	return *this;
}

ostream& operator<<(ostream& os, const MyString& myStr)
{
	os << myStr.strPtr;
	return os;
}