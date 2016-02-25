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


	cout << "\n\n";
	cout << "The Strength of your character is currently: " << char_ptr -> str << "\n\n";
	cout << "The Health of your character is currently: "<< char_ptr-> health << "\n\n";
	cout << "The Dexterity of your character is currently: "<< char_ptr-> dex << "\n\n";
	cout << "The Age of your character is currently: "<< char_ptr-> age << "\n\n";
	cout << "The Name of your character is currently: "<< char_ptr-> name << " ,very mighty-sounding indeed..." << "\n\n";
	cout << "The Race of your character is currently: "<< char_ptr-> race << "\n\n";
	cout << "\n\n";


	cin.get();


}
