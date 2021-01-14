#define _CRT_SECURE_NO_WARNINGS

#include "pch.h"
using namespace std;
#include <iostream>
#include <sstream>
#include <iomanip>
#include <string>
#include "University.h"

int main() {
	// переходим в консоли на русский язык
	system("chcp 1251 > nul");

	cout << "===============Конструктор по умолчанию" << endl;
	University v1;
	v1.exec();

	cout << "===============Конструктор с параметрами" << endl;
	University v2("ГГТУ", 27, "R");
	v2.exec();


	cout << "===============Конструктор с параметром" << endl;
	University v3("ПТГУ 88 O");
	v3.exec();

	cout << "===============Копирующий конструктор" << endl;
	University v4(v3);
	v4.exec();
	
}
