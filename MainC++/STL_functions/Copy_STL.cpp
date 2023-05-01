#include <string>
#include <iostream>
#include <algorithm>
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

	vector<Person> result;
	vector<Person> result2;

	copy(people.begin(), people.end(), back_inserter(result));

	copy_if(people.begin(), people.end(), back_inserter(result2), [](const Person& p)
		{
			return p.age > 25;
		}
	);

	sort(result2.begin(), result2.end(), [](const Person& p1, const Person& p2)
		{
			return p1.name > p2.name;
		}
	);

	cout << "����� ���������:\t" << result2.size() << endl;

	for (auto el : result2) {
		cout << "���:\t" << el.name << "\t�����\t" << el.score << endl;
	}
	return 1;

}
#endif 