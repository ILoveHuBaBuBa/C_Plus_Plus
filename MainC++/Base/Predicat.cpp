#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <windows.h>

using namespace std;

#if 0
bool GreaterThanZero(int a) {
	return a > 0;
}

bool LessThanZero(int a) {
	return a < 0;
}

class Person {
public:
	Person(string name, double score) {
		this->name = name;
		this->score = score;
	}

	bool operator()(const Person& p) {
		return p.score > 180;
	}

	string name;
	double score;

};

int main(int argc, char* argv[]) {
	setlocale(LC_ALL, "en");

	vector<int> v = { 1,-2, -55, 9, 8, 2 };

	int result = count_if(v.begin(), v.end(), LessThanZero);

	cout << result << endl;

	cout << GreaterThanZero(1) << endl;

	vector<Person> people
	{
		Person("����", 181),
		Person("����", 30),
		Person("����", 10),
		Person("����", 179),
		Person("����", 200),
		Person("����", 198),
		Person("������", 181),
		Person("������", 50),
		Person("����", 150),
		Person("����", 199),
	};

	int result2 = count_if(people.begin(), people.end(), people.front());

	cout << result2 << endl;

	return 1;
}
#endif 