#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main()
{
	string firstname, lastname;
	double weight;
	int age;
	
	cout << "Enter your first name followed by your last name: " << endl;
	cin >> firstname >> lastname;
	cout << "Enter your age: " << endl;
	cin >> age;
	cout << "Enter your weight: " << endl;
	cin >> weight;
	
	cout << "\nFirst Name, Last Name: " << firstname << " " << lastname << endl;
	cout << "Age: " << age << endl;
	cout << "Weight: " << weight << endl;
	_getch ();
	return 0;
}
