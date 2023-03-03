#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	std::string name;
	int nil;
	std::string grade;
	std::string kad;

	cout << "Student name = ";
	cin >> name;
	cout << "Mark = ";
	cin >> nil;

	cout << "------------------------------------------- \n";

	cout << "Student name = " << name << "\n";
	if (nil < 70) {
		grade = "C";
		kad = "Didn't pass :(";
	}
	else if (nil < 90) {
		grade = "B";
		kad = "You've succeeded :)";
	}
	else if (nil >= 90) {
		grade = "A";
		kad = "You've succeeded :)";
	}
	cout << "Your genenral grade is = " << grade << "\n";
	cout << "Your grade status = " << kad << "\n";

	_getch();
};
