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

class University {
private:
		string n_name;
		int n_NoF;
		string n_status; // R - республиканский, O - обласной, K - краевой, S - городской

public:
	University();
	University(string name, int NoF, string status);
	University(string str);
	University(const University &Un);


	void name_change(string name) {
		n_name = name;
	}
	void number_change(int number) {
		n_NoF = number;
	}
	void status_change(string status) {
		n_status = status;
	}


	void exec();

};
