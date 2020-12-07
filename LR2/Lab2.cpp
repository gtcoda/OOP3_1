#include "Lab2.h"


void Lab2::exec() {

	std::string input;
	std::stringstream output;
	std::vector<string> tok;

	cout << "Enter text:" << endl;
	std::getline(cin, input);

	char * pch = strtok((char *)input.c_str(), " ,.-"); // �� ������ ��������� ������� ����������� (������, �������, �����, ����)

	while (pch != NULL) {
		string str = pch;
		tok.push_back(pch);
		std::cout << pch << "\n\r";
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

	s.erase(0, 1); // ������ ������ ������
	cout << s;
}

