/*
"Enter your age: "
"Enter your height: "
"Enter your bounty: "
"Your character = "
"Zoro"
"Sanji"
"Usopp"
"Chopper"
"Franky"
"Brook"
"Jinbe"
*/

#include <iostream>
#include <string>
using namespace std;


string getCharacter() {
	int age, height, bounty;
	int one_hundred_million = 100000000;

	cout << "Enter your age: ";
	cin >> age;

	if(age <= 25) {
		cout << "Enter your height: ";
		cin >> height;
		
		if(height < 100) {
			return "Chopper";
		} else if (height < 180) {
			return "Usopp";
		} else {
			cout << "Enter your bounty: ";
			cin >> bounty;

			if(bounty > 11 * one_hundred_million) {
				return "Zoro";
			} else {
				return "Sanji";
			}
		}
	}

	if(age <= 60) {
		cout << "Enter your bounty: ";
		cin >> bounty;

		if(bounty > 5 * one_hundred_million) {
			return "Jinbe";
		} else {
			return "Franky";
		}
	} else {
		return "Brook";
	}
}



int main()
{
	string character = getCharacter();
	cout << "Your character = " << character << endl;
	return 0;
}