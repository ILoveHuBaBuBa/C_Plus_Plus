#include <string>
#include <iostream>
#include <windows.h>

using namespace std;

#if 0
void Foo(int value) {
	if (value < 0) {
		throw exception("����� ������ 0 !!!");
	}

	if (value == 1) {
		throw exception("����� = 1 !!!");
	}
	cout << "���������� = " << value << endl;
}

int main(int argc, char* argv[]) {
	setlocale(LC_ALL, "en");

	try {
		Foo(55);
		Foo(-12);
		Foo(1);
	}
	catch (const exception& ex) {
		cout << "���� 1 �� ������� " << ex.what() << endl;
	}
	catch (const char* ex) {
		cout << "���� 3 �� ������� " << ex << endl;
	}
	catch (...) {
		cout << "���� 4 ���-�� ����� �� ���" << endl;
	}

	return 1;
}
#endif 