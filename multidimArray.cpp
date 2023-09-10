#include <iostream>
using namespace std;

int main()
{
	// MULTIDIMENSIONAL ARRAYS (can be used represent matrix, other types of data)
	string letters[2][4] = {
		{"A", "B", "C", "D"},
		{"E", "F", "G", "H"}};
	/* Here the first inde reveals the length of the main array and the second index reveals the length of the sub arrays so
		letters is an array with two elements, where each elements are array having four elements each.*/

	// Accessing elements
	cout << letters[0][2] << "\n"; // Outputs "C"
	cout << "\nBefore replacing element: " << letters[0][0];
	letters[0][0] = "Z"; // Replacing elements
	cout << "\nAfter replacing element: " << letters[0][0] << "\n";

	// Looping through array using index. First loop uses len of main array. 2nd loop uses len of subarray
	for (int i = 0; i < 2; i++)
	{
		cout << "\n"
			 << "Row " << i << ":\n";
		for (int j = 0; j < 4; j++)
		{
			cout << letters[i][j] << "\t";
		}
	}
	return 0;
}