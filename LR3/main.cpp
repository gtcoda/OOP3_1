#define _CRT_SECURE_NO_WARNINGS

#include "pch.h"
using namespace std;
#include <iostream>
#include <sstream>
#include <iomanip>
#include <string>
#include "University.h"

int main() {
	// ��������� � ������� �� ������� ����
	system("chcp 1251 > nul");

	cout << "===============����������� �� ���������" << endl;
	University v1;
	v1.exec();

	cout << "===============����������� � �����������" << endl;
	University v2("����", 27, "R");
	v2.exec();


	cout << "===============����������� � ����������" << endl;
	University v3("���� 88 O");
	v3.exec();

	cout << "===============���������� �����������" << endl;
	University v4(v3);
	v4.exec();
	
}
