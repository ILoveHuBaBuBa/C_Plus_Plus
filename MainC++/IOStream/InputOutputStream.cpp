#include <string>
#include <iostream>
#include <fstream>
#include <windows.h>

using namespace std;

#if 0
int main(int argc, char* argv[]) {
	setlocale(LC_ALL, "en");

	string path = "myFile.txt";
	fstream fs;
	//int consoleCode = GetConsoleCP(); ��� ��������� ��������� �������
	//setConsoleOutputCP(); ��� ��������� ������ ������
	//setConsoleCP(); ��� ��������� ������ �����

	fs.open(path, ios::in | ios::out | ios::app);
	if (!fs.is_open()) {
		cout << "������ �������� �����" << endl;
	}
	else {
		string msg;
		int value;
		cout << "���� ������" << endl;
		cout << "������� 1 ��� ������ ��������� � ����: " << endl;
		cout << "������� 2 ��� ���������� ���� ��������� �� ����� ����: " << endl;
		cin >> value;

		if (value == 1) {
			cout << "������� ���� ���������" << endl;
			SetConsoleCP(1251);
			cin >> msg;
			fs << msg << "\n";
			SetConsoleCP(866);
		}
		else if (value == 2) {
			cout << "������ ������ �� �����" << endl;
			while (!fs.eof()) {
				msg = "";
				fs >> msg;
				cout << msg << endl;
			}
		}
	}
	fs.close();

	return 1;
}
#endif 