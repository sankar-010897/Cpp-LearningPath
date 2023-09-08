#include <iostream>
using namespace std;

int main() {
	int num2, num3, num1 = 50; // + operater is used to add together two values, here it is arithmetic
	num2 = num1 + 100;
	num3 = num2 + num2;
	int num_diff = num2 - num1;//Arithmetic Operator: Subtraction
	int half = num3/2; // Divison operator
	int rem = num2 % 147; // modulo operator
	int inc = num1++; // increment operator
	int dec = --inc; // decrement operator
	cout << num3 << "\n" << half << "\n" << rem;
	return 0;
}