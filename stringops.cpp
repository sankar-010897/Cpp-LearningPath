#include <iostream>
#include <string>
using namespace std;

int main() {
	string greeting = "Hello ";
	string firstName = "John ";
	string lastName = "Doe";
	string fullName = firstName + lastName; // string concantenation
	string newfullName = firstName.append(lastName); // Append function for concantenation
	
	cout << (greeting + fullName+ "!"); // strign concantenation in cout
	cout << newfullName.length(); // length function to determine length of string
	cout << fullName.size(); // ANother function to determine length of string
	cout << fullName[0]; //Access char in string by reffering to it's index

	greeting[0] ='J' // Using index to modify char in a string
	cout << greeting;
	
	// using '\"' char to specify to cout to display Vikings within double quotes
	string txt = "We are the so-called \"Vikings\" from the north.";
	//using '\'' char to specify to cout to display Vikings within single quotes
	string txt2 = "We are the so-called \'Vikings\' from the north.";
	string txt3 = "It\'s from the north.";

	return 0;
}