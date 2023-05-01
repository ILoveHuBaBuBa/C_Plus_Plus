#include <string>
#include <iostream>
#include <windows.h>

using namespace std;

#if 0
class Component {
public:
	Component(string companyName) {
		cout << "����������� Component" << endl;
		this->companyName = companyName;
	}
	string companyName;
};

class GPU : public Component {
public:
	GPU(string companyName): Component(companyName)
	{
		cout << "����������� GPU" << endl;
	}
};

class Memory : public Component {
public:
	Memory(string companyName): Component(companyName)
	{
		cout << "����������� Memory" << endl;
	}
};

class GraphicCard : public GPU, public Memory {
public:
	GraphicCard(string GPUCompanyName, string MemoryCompanyName) : GPU(GPUCompanyName), Memory(MemoryCompanyName)
	{
		cout << "����������� GraphicCard" << endl;
	}
};

class Character {
public:
	Character() {
		cout << "����������� Character" << endl;
	}
	int HP;
};

class Warrior : public virtual Character {
public:
	Warrior() {
		cout << "����������� Warrior" << endl;
	}
};

class Orc : public virtual Character {
public:
	Orc() {
		cout << "����������� Orc" << endl;
	}
};

class OrcWarrior : public Warrior, public Orc {
public:
	OrcWarrior() {
		cout << "����������� OrcWarrior" << endl;
	}
};

int main(int argc, char* argv[]) {
	setlocale(LC_ALL, "en");

	return 1;
}
#endif 