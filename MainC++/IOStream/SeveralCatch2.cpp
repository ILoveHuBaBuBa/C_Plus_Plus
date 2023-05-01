#include <string>
#include <iostream>
#include <windows.h>

using namespace std;

#if 0
class MyException : public exception {
private:
	int dataState;

public:
	MyException(const char* msg, int dataState) :exception(msg) {
		this->dataState = dataState;
	}
	int getDataState() {
		return dataState;
	}
};

void Foo(int value) {
	if (value < 0) {
		throw exception("����� ������ 0 !!!");
	}

	if (value == 1) {
		throw MyException("����� = 1 !!!", value);
	}
	cout << "���������� = " << value << endl;
}

int main(int argc, char* argv[]) {
	setlocale(LC_ALL, "en");

	try {
		Foo(55);
		Foo(1);
	}
	catch (MyException& ex) {
		cout << "���� 1 �� ������� " << ex.what() << endl;
		cout << "��������� ������" << ex.getDataState() << endl;
	}
	catch (exception& ex) {
		cout << "���� 2 �� ������� " << ex.what() << endl;
	}

	return 1;
}
#endif 