#include <iostream>
using namespace std;

int main() {
	/*Short hand elif expression:
	  variable = (condition) ? expressionTrue : expressionFalse;*/
	int time = 20;
	string result = (time < 18) ? "Good day." : "Good evening.";
	cout << result;
	return 0;
}