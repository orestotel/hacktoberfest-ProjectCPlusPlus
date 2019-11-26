#include <iostream>
#include <string>
using namespace std;
// Інградієнт, страва (назва, калорійність, ціна) (Назва, масив інградієнтів)


class part {
private:
	string name;
	double calories;
	double price;
public:
	void set(){
		cout << "Name of ingredient: ";
		cin >> name;
		cout << "Setting a " << name << "ingredient" << endl;

		cout << "Calories: ";
		cin >> calories;
		cout << endl;

		cout << "Price: ";
		cin >> price;
		cout << endl;
	}

};
class food {
private:
	string name;
	int n=1;
	part* parts;
public:
	void set() {
		cout << "setting a dish." << endl;
		cout << "Enter name of the dish: ";
		cin >> name;
		cout << "Dish-name: " << name << endl;
		cout << "Enter number of ingredients: ";
		cin >> n;
		parts = new part[n];
		cout << "number of ingredients: " << n << endl;
		//enter ingredients into the existing array.
	}
};
//масиви

//food createFood() {
//	int n;
//	cout << "Enter number of desired dishes: ";
//	cin >> n;
//	food * arr = new food[n];
//	cout << n << " dishes to be created: " << n << endl;
//	for (int i = 0; i < n; i++) {
//		arr[i].set();
//		return arr[i];
//	}
//	cout << "output.." << endl;
//	for (int i = 0; i < n; i++) {
//		return arr[i];
//	}
//}
////to be called first
//part createPart() {
//	int n;
//	cout << "Enter number of desired ingredients: ";
//	cin >> n;
//	part * arr = new part[n];
//	cout << n << " ingredients to be created: " << endl;
//	for (int i = 0; i < n; i++) {
//		arr[i].set();
//		cout << "==========" << endl;
//	}
//	for (int i = 0; i < n; i++) {
//		return arr[i];
//	}
//}

//посортувати страви за ціною

int main() {
	cout << "Enter the number of ingredients: ";
	int ingNum;
	cin >> ingNum;
	part * ingArr = new part[ingNum];
	cout << "setting " << ingNum << " ingredients.." << endl;
	for (int i = 0; i < ingNum; i++) {
		cout << "setting " << i << "'st;" << endl;
		ingArr[i].set();
		cout << "------successfully set-------------" << endl;
	}
	cout << "Enter the desired number of dishes: ";
	int dishNum;
	cin >> dishNum;
	food * dishArr = new food[dishNum];
	cout << "Setting " << dishNum << " dishes" << endl;
	for (int i = 0; i < dishNum; i++) {
		cout << "setting " << i << "'st;" << endl;
		dishArr[i].set();
		cout << "-------------successfully set------" << endl;
	}



	return 0;
}
