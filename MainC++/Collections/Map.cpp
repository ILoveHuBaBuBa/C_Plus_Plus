#include <string>
#include <iostream>
#include <map>
#include <windows.h>

using namespace std;

#if 0
int main(int argc, char* argv[]) {
	setlocale(LC_ALL, "en");

	map<int, string> myMap;

	myMap.insert(make_pair(4, "�������"));

	myMap.insert(pair<int, string>(5, "�������"));

	myMap.emplace(3, "�������");

	myMap.emplace(22, "����������");

	auto res = myMap.emplace(22, "sdgdfdf");

	cout << myMap[3] << endl;

	auto it = myMap.find(22);

	if (it != myMap.end()) {
		cout << it->second << endl;
		cout << it->first << endl;
	}
	else {
		cout << "������� �� ������" << endl;
	}

	map<string, int> myMap2;

	myMap2.emplace("����", 1313);
	myMap2.emplace("����", 222);
	myMap2.emplace("����", 4441);

	myMap2["����"] = 99;
	myMap2["����"] = 9797;

	myMap2["����"] = 44;

	myMap2.at("����") = 33;

	cout << myMap2["����"] << endl;
	cout << myMap2.at("����") << endl;

	try {
		myMap2.at("����") = 3;
	}
	catch (const std::exception& ex)
	{
		cout << ex.what() << endl;
		cout << "���� ���������� � ���������� map" << endl;
	};

	myMap2.erase("����");

	return 1;
}
#endif 