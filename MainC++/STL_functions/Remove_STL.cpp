#include <string>
#include <iostream>
#include <vector>
#include <windows.h>

using namespace std;

#if 0
class Person {
public:
	Person(string name, double score, int age) {
		this->name = name;
		this->score = score;
		this->age = age;
	}

	bool operator()(const Person& p) {
		return p.score > 180;
	}
	
	string name;
	double score;
	int age;
	
};

int main(int argc, char* argv[]) {
	setlocale(LC_ALL, "en");

	vector<int> v = { 5,9,1,46,4,9,4 };

	auto result = remove(v.begin(), v.end(), 9);

	v.erase(result, v.end());

	for (auto el : v) {
		cout << el << endl;
	}

	cout << endl << endl;

	vector<Person> people
	{
		Person("����", 181, 17),
		Person("����", 30, 22),
		Person("����", 179, 19),
		Person("����", 200, 25),
		Person("����", 198, 24),
		Person("������", 181, 23),
		Person("������", 50, 30),
		Person("�����", 180, 40),
		Person("����", 150, 32),
		Person("����", 199, 31),
		Person("����", 10, 53)
	};

	people.erase(remove_if(people.begin(), people.end(),
		[](const Person& p) {return p.score < 150 || p.age > 25; }),
		people.end()
	);

	cout << "����� ���������:\t" << people.size() << endl;

	for (auto el : people) {
		cout << "���:\t" << el.name << "\t�����\t" << el.score << "\t�������\t" << el.age << endl;
	}

	string str = "����� � �����������  ���������";
	cout << str << endl;

	str.erase(remove(str.begin(), str.end(), ' '), str.end());

	cout << str << endl;

	return 1;
}
#endif 