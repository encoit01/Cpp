/*
#include <iostream>
#include "MyString.hpp"

using namespace std;
int main() {
	MyString s1;
	MyString s2("Hochschule Esslingen");
	cout << s1.c_str() << endl;
	cout << s2.c_str() << endl;
	s1.assign(s2);
	s2.assign(MyString(" - University of Applied Sciences"));
	s1.append(s2);
	cout << s1.c_str() << endl;
	cout << s2.c_str() << endl;
	MyString s3(s1);
	s1.at(21) = 'X';
	s1.at(2000) = 'O';
	cout << s1.c_str() << endl;
	cout << s2.c_str() << endl;
	if (!s3.empty())
	{
		cout << "Laenge von s3: " << s3.size() << endl;
		cout << "Kapazitaet von s3: " << s3.capacity() << endl;
		cout << s3.c_str() << endl;
	}
	s3.clear();
	cout << "Laenge von s3: " << s3.size() << endl;
	cout << "Kapazitaet von s3: " << s3.capacity() << endl;
	cout << s3.c_str() << endl;
	return 0;
}
*/

#include <iostream>
#include "MyString.hpp"
using namespace std;

int main() {
	MyString s1("Eins ");
	MyString s2("Zwei ");
	MyString s3("Drei ");
	MyString s4("NIX");
	s4 = s1 + s2 + s3;
	s2 = s1;
	cout << "Sind s1 und s2 gleich? "
		<< boolalpha << (s1 == s2) << endl;
	cout << s1 << endl;
	cout << s2 << endl;
	cout << s3 << endl;
	cout << s4 << endl;
	return 0;
}