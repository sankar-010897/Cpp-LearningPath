#include <iostream>
using namespace std;

int main()
{
	// DECLARING AN ARRAY OF TYPE STRING. ALL ELEMENTS IN ARRAY IS OF SAME DATATYPE. SIZE OF ARRAY IS FIXED
	string fast_food[4] = {"Pizza", "Burger", "Fresh Fries", "Hot Dog"};
	// ACCESSING ELEMENTS OF ARRAY
	cout << fast_food[0];
	// REPLACING ELEMENTS OF ARRAY
	cout << "\nBefore replacing element: " << fast_food[2];
	fast_food[2] = "French Fries";
	cout << "\nAfter replacing element: " << fast_food[2];

	// MULTIDIMENSIONAL ARRAYS
	string letters[2][4] = {
		{"A", "B", "C", "D"},
		{"E", "F", "G", "H"}};
	/* Here the first inde reveals the length of the main array and the second index reveals the length of the sub arrays so
		letters is an array with two elements, where each elements are array having four elements each.*/
	return 0;
}