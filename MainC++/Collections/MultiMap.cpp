#include <string>
#include <iostream>
#include <map>
#include <windows.h>

using namespace std;

#if 0
int main(int argc, char* argv[]) {
	setlocale(LC_ALL, "en");

	multimap<string, int> myMultimap;

	myMultimap.emplace("����", 1313);
	myMultimap.emplace("����", 1313);
	myMultimap.emplace("����", 222);
	myMultimap.emplace("����", 4441);

	return 1;
}
#endif 