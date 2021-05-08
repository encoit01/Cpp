#include <iostream>
#include "MyString.hpp"

using namespace std;

	void reserve(unsigned int c) {
		if (strCap > c) {
			cout << "Kapazität ist größer als Wert!" << endl;
		}
		else {
			strCap = c;
			char *tmp = new char[strCap];
			strcpy(tmp, strPtr);
			delete[] strPtr;
			strPtr = tmp;
		}

	}

	MyString & MyString::append(MyString & str) {
		unsigned int erg = strCap + str.strCap;
		reserve(erg);
		strcat(strPtr, str.strPtr);
	}  

	MyString & assign(MyString & str) {
		strSiz = str.strSiz;
		strCap = str.strCap;
		strPtr = new char[strCap];
		strcpy(strPtr, str.strPtr);
	}

	const char* c_str() {
		return strPtr;
	}

	unsigned int size() {
		return strSiz;
	}
	unsigned int capacity() {
		return strCap;
	}
	void clear() {
		strSiz = 0;
		strCap = 0;
		strPtr = new char[0];
	}

	void empty() {
		if (*strPtr == 0) {
			cout << "String leer" << endl;
		}
		else {
			cout << "String nicht leer" << endl;
		}
	}

	int at(int i) {
		if (i > strCap) {
			return 0;
		}
		else {
			return strPtr[i];
		}
	}

	MyString() {
		strSiz = 0;
		strCap = 0;
		strPtr = new char[strCap];
	}

	MyString(const char wort[]) {
		strSiz = sizeof(wort);
		strCap = strSiz;
		strPtr = new char[strSiz];
		strcpy(strPtr, wort);
	}

	MyString(MyString & str) {
		strSiz = str.strSiz;
		strCap = str.strCap;
		strPtr = new char[strCap];
		strcpy(strPtr, str.strPtr);
	}
	~MyString() {
		delete[] strPtr;
	}

};