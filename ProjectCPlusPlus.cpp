// My first C++ project - Ivana Franka University
#include<iostream>
#include<string>
#include<cmath>
#include<cstdlib>
using namespace std;
int main() {
	string name;
	int age;
	string answer;
	cout << "enter your name, peasant.\n" << endl;
	cin >> name;
	cout << "enter your age ):)\n" << endl;
	cin >> age;
	cout << "Hello, " << name << ",who is " << age << " years old\n" << endl;
	if (age < 18) {
		cout << "You are a child, dude\n";

	}
	if (age >= 18 && age < 45) {
		cout << "You are pretty young;)\n";

	}
	if (age > 45) {
		cout << "You are quite older than me\n";
	}
	cout << "So listen here," << name << " I am gonna play a game with you\n\n\n\n";
	cin >> answer;
	if (answer == "ok") {
		cout << "Well then. You chose this path yourself. Let's do it quick now!:\n";
		cout << "\n\n\n AXE OR SPADE?";
		cout << rand() % 2;

	}
	system("pause");
	return 0;

}
