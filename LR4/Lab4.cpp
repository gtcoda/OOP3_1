#define _CRT_SECURE_NO_WARNINGS
#pragma once
using namespace std;
#include <iostream>
#include <sstream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <cctype>
#include <cstdlib>
#include <string>
#include <vector>

class University_name {
protected:
	string n_name;

public:
	University_name() {
		n_name = "GSU";
	}
	University_name(string name) {
		n_name = name;
	}


	void name_change(string name) {
		n_name = name;
	}
	void show_name() {
		cout << "Университет: " << n_name << endl;
	}

};


class University_number {
protected:
	int n_NoF;

public:
	University_number() {
		n_NoF = 25;
	}
	University_number(int number) {
		n_NoF = number;
	}

	void number_change(int number) {
		n_NoF = number;
	}
	void show_number() {
		cout << "Количество факультетов: " << n_NoF << endl;
	}

};


class University_status {
protected:
	string n_status; // R - республиканский, O - обласной, K - краевой, S - городской

public:
	University_status() {
		n_status = "R";
	}
	University_status(string status) {
		n_status = status;
	}

	void status_change(string status) {
		n_status = status;
	}
	void show_status() {
		cout << "Статус: ";
		// R - республиканский, O - обласной, K - краевой, S - городской
		if (n_status == "R") {
			cout << "Республиканский";
		}
		if (n_status == "O") {
			cout << "Обласной";
		}
		if (n_status == "K") {
			cout << "Краевой";
		}
		if (n_status == "S") {
			cout << "Городской";
		}
		cout << endl;
	}


};

class University_all : public University_name, public University_number, public University_status {

public:
	University_all();
	University_all(string name, int number, string status) :
		University_name(name), University_number(number), University_status(status) {};

	void show() {
		cout << "Университет: " << n_name << endl;
		cout << "Количество факультетов: " << n_NoF << endl;
		cout << "Статус: ";
		// R - республиканский, O - обласной, K - краевой, S - городской
		if (n_status == "R") {
			cout << "Республиканский";
		}
		if (n_status == "O") {
			cout << "Обласной";
		}
		if (n_status == "K") {
			cout << "Краевой";
		}
		if (n_status == "S") {
			cout << "Городской";
		}
		cout << endl;
	}
};



