#include <string>
#include <iostream>
#include <windows.h>

using namespace std;

#if 0
class A {
public:
	string msgOne = "��������� ����";

private:
	string msgTwo = "��������� ���";

protected:
	string msgThree = "��������� ���";

};

class B : public A {
public:
	void PrintMsg() {
		cout << msgOne << endl;
	}
};

int main(int argc, char* argv[]) {
	setlocale(LC_ALL, "en");

	return 1;
}
#endif 