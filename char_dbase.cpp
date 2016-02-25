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
	dbase *char_ptr;

	char_ptr = &character;

	cout << char_ptr->str;

	cin.get();


}
