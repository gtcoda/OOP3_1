#define _CRT_SECURE_NO_WARNINGS


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
#include "Lab2.h"

int main() {
		// переходим в консоли на русский язык
		system("chcp 1251 > nul");
		Lab2 m = new Lab2();
		m.exec();
		system("pause");


}
