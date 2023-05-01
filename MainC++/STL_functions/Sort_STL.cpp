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

bool MyPred(int a, int b) {
	return a > b;
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

	vector<int> v = { 9,4,94,6,1,3,7 };
	sort(v.begin(), v.end(), [](int a, int b) {return a > b; });

	for (auto element : v) {
		cout << element << endl;
	}
	cout << endl << endl;
	const int SIZE = 7;
	int arr[SIZE] = { 9,4,94,6,1,3,7 };

	sort(arr, &arr[SIZE], [](int a, int b) {return a > b; });

	for (auto element : arr) {
		cout << element << endl;
	}

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

	sort(people.begin(), people.end(), [](const Person& p1, const Person& p2)
		{
			return p1.score > p2.score;
		}
	);

	for (auto element : people) {
		cout << "���:\t" << element.name << "\t����:\t" << element.score << endl;
	}
	
	return 1;
}
#endif 