#include <iostream>
using namespace std;

int main()
{
	// Declasring without mentioning array size
	string cars[] = {"Volvo", "BMW", "Ford"}; // Three array elements
	// We can get array size using sizeof() function. It returns size in bytes
	cout << "The size of the cars array is : " << sizeof(cars) << "bytes\n";
	// to get the length of array we divide sizeof(Arr) with size(datatype)
	cout << "The length of the cars array is : " << (sizeof(cars) / sizeof(string));
	return 0;
}