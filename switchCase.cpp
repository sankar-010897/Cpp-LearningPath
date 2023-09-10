#include <iostream>
using namespace std;

int main() {
	int day;
	cout << "Enter the number of day of the week (like 5th day of the week): ";
	cin >> day;
	switch (day) {
	case 1:
    	cout << "\nMonday";
    	break;
	case 2:
    	cout << "\nTuesday";
    	break;
	case 3:
    	cout << "\nWednesday";
    	break;
	case 4:
    	cout << "\nThursday";
    	break;
	case 5:
    	cout << "\nFriday";
    	break;
	case 6:
    	cout << "\nSaturday";
    	break;
	case 7:
    	cout << "\nSunday";
    	break;
	// default is used when there is no match with any of the cases.
	default:
		cout << "\nThe number you have entered is not between 1-7.\nEnter a number between 1-7.";
		break;
	}
	return 0;
}