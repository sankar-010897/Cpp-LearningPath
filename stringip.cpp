#include <iostream>
using namespace std;

int main() {
	string firstName;
	cout << "Type your first name: ";
	cin >> firstName; // get user input from the keyboard
	cout << "Your name is: " << firstName; // Only the string before whitespace is considered for input

	// To get whole line as input use getline(cin, var) function
	string fullName;
	cout << "Type your first name: ";
	getline (cin, fullName);
	cin >> fullName; // get user input from the keyboard
	cout << "Your full name is: " << fullName;
	


	return 0;
}