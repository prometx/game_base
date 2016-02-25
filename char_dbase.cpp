#include <iostream>

using namespace std;


struct char_dbase {

	int str;
	int health;
	int dex;
	int age;
	string name;
	string race;
	
};

int main () {

	char_dbase character;
	char_dbase *char_ptr;

	char_ptr = &character;
	
	character.str = 13;
	character.health = 100;
	character.dex = 19;
	character.age = 37;
	character.name = "Lothar";
	character.race = "Human";


	cout << char_ptr -> str << "\n\n";
	cout << char_ptr-> health << "\n\n";
	cout << char_ptr-> dex << "\n\n";
	cout << char_ptr-> age << "\n\n";
	cout << char_ptr-> name << "\n\n";
	cout << char_ptr-> race << "\n\n";


	cin.get();


}
