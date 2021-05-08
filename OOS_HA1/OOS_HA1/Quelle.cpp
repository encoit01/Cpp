#define _CRT_SECURE_NO_WARNINGS
#include <clocale>  // f�r setlocale
#include <ctime>    // f�r time_t, struct tm, time, 
// strftime, localtime
#include <iostream>
using namespace std;

int main()
{
	time_t rawtime;
	struct tm * timeinfo;
	time(&rawtime);
	timeinfo = localtime(&rawtime);
	char buffer[80] = { 0 };

	// Derzeitige Lokalit�tseinstellungen augeben
	cout << "Locale ist: " << setlocale(LC_ALL, NULL) << endl;
	strftime(buffer, 80, "%c", timeinfo);
	cout << "Zeit: " << buffer;
	cout << " Dies ist ein Test: �������. Ok?" << endl;

	// Lokalit�tseinstellungen der installierten Umgebung aktivieren
	setlocale(LC_ALL, "");
	cout << "Locale ist: " << setlocale(LC_ALL, NULL) << endl;
	strftime(buffer, 80, "%c", timeinfo);
	cout << "Zeit: " << buffer;
	cout << " Dies ist ein Test: �������. Ok?" << endl;

	// Einzelne Lokalit�tseinstellungen �ndern
	setlocale(LC_TIME, "kor");
	setlocale(LC_CTYPE, "jpn");
	cout << "Locale ist: " << setlocale(LC_ALL, NULL) << endl;
	strftime(buffer, 80, "%c", timeinfo);
	cout << "Zeit: " << buffer;
	cout << " Dies ist ein Test: �������. Ok?" << endl;

	return 0;
}