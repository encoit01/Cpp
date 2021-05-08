#include <iostream>
#include "Fifo.hpp"


using namespace std;

int main() {
	int ZWV;
	cout << "Groesse des Fifo Speichers eingeben:";
	cin >> ZWV;
	Fifo test(ZWV);
	test.push('A');
	test.push('B');
	cout << test.pop() << endl;
	cout << test.pop() << endl;
	test.push('C');
	test.push('D');
	cout << "WRITE:" << test.getwPos() << endl;
	cout << "READ:" << test.getrPos() << endl;
	cout << test.pop() << endl;
	cout << test.pop() << endl;
	cout << "WRITE:" << test.getwPos() << endl;
	cout << "READ:" << test.getrPos() << endl;

	return 0;
}