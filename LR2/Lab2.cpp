#include "Lab2.h"

std::string Lab2::input = "";
std::string Lab2::output = "";

void Lab2::exec() {


	std::vector<string> tok;

	cout << "Enter text:" << endl;
	std::getline(cin, input);

	char * pch = strtok((char *)input.c_str(), " ,.-"); // во втором параметре указаны разделитель (пробел, запятая, точка, тире)

	while (pch != NULL) {
		string str = pch;
		tok.push_back(pch);
		
		pch = strtok(NULL, " ,.-");

	}

	for (vector<string>::iterator it = tok.begin(); it < tok.end(); it++) {
		(*it).c_str();

		if (isdigit((*it).c_str()[0])) {
			int m = atoi((*it).c_str());
			char stri[6] = "";
			_itoa_s(m, stri, 6, 16);

			for (int r = 0; (r < 6) && (stri[r]); r++) {
				if (stri[r] >= 'a' && stri[r] <= 'z') stri[r] -= 'z' - 'Z';
			}

			string str = stri;
			str = "0x" + str;
			(*it) = str;
		}
	}

	string s;

	for (vector<string>::iterator it = tok.begin(); it < tok.end(); it++) {
		s = s + " " + (*it);
	}

	s.erase(0, 1); // удалим первый пробел


	cout << s;
}

