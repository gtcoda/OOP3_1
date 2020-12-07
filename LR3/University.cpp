#include "University.h"
University::University(){
	n_name = "GCU";
	n_NoF = 25; 
	n_status = "R";
}

University::University(string name = "GCU", int NoF = 25, string status = "R"):
n_name(name), n_NoF(NoF), n_status(status){

}

University::University(string str) {
	char * pch = strtok((char *)str.c_str(), " ,.-"); // �� ������ ��������� ������� ����������� (������, �������, �����, ����)

	for (int i = 0; (i < 3) && (pch != NULL); i++) {
		string str = pch;
		switch (i) {
			case 0: n_name = str; break;
			case 1: n_NoF = atoi(str.c_str()); break;
			case 2: n_status = str; break;
		}
		pch = strtok(NULL, " ,.-");
	}
}

University::University(const University &Un):
	n_name(Un.n_name), n_NoF(Un.n_NoF), n_status(Un.n_status){

}


void University::exec() {
	cout << "�����������: " << n_name << endl;
	cout << "���������� �����������: " << n_NoF << endl;
	cout << "������: ";
	// R - ���������������, O - ��������, K - �������, S - ���������
	if (n_status == "R") {
		cout << "���������������";
	}
	if (n_status == "O") {
		cout << "��������";
	}
	if (n_status == "K") {
		cout << "�������";
	}
	if (n_status == "S") {
		cout << "���������";
	}
	cout << endl;

}