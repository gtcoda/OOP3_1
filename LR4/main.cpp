#define _CRT_SECURE_NO_WARNINGS

#include "pch.h"
using namespace std;
#include <iostream>
#include <sstream>
#include <iomanip>
#include <string>
#include "Lab4.h"


int main() {
	// переходим в консоли на русский язык
	system("chcp 1251 > nul");

	University_all s("ГГТУ", 27, "R");

	s.show_name();
	s.show_number();
	s.show_status();

	cout << "----------------------------" << endl;
	s.show();
}
