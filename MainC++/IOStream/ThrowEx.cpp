#include <string>
#include <iostream>
#include <windows.h>

using namespace std;

#if 0
void Foo(int value) {
	if (value < 0) {
		throw exception("����� ������ 0 !!!");
	}

	if (value > 0) {
		throw exception("����� = 1 !!!", value);
	}
	cout << "���������� = " << value << endl;
}


int main(int argc, char* argv[]) {
	setlocale(LC_ALL, "en");

	try {
		Foo(55);
		Foo(-12);
	}
	catch (const exception& ex) {
		cout << "�� ������� " << ex.what() << endl;
	}

	return 1;
}
#endif 