#include <string>
#include <iostream>
#include <fstream>
#include <windows.h>

using namespace std;

#if 0
int main(int argc, char* argv[]) {
	setlocale(LC_ALL, "en");

	string path = "myFile.tx";
	ifstream fin;
	fin.exceptions(ios::badbit | ios::failbit);

	try {
		cout << "������� ������� ����" << endl;

		fin.open(path);

		cout << "���� ������� ������" << endl;

	}
	catch (const ifstream::failure& ex) {
		cout << ex.what() << endl;
		cout << ex.code() << endl;
		cout << "������ �������� �����" << endl;;
	}
	return 1;

}
#endif 