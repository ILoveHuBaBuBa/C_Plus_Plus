#include <string>
#include <iostream>
#include <windows.h>

using namespace std;

#if 0
class A {
public:
	A() {
		cout << "�������� ������������ ������ ������� �" << endl;
	}
	virtual ~A() = 0;

};

A::~A() {};

class B : public A {
public:
	B() {
		cout << "�������� ������������ ������ ������� B" << endl;
	}
	~B() override {
		cout << "����������� ������������ ������ ������� B" << endl;
	}
};

int main(int argc, char* argv[]) {
	setlocale(LC_ALL, "en");

	return 1;
}
#endif 