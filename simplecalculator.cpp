#include <iostream>
using namespace std;

int main() {
	int x, y;
	int sum, prod, div, diff;
	
	cout << "Enter a number: \n";
	cin >> x;
	cout << "Enter another number: \n";
	cin >> y;
	
	sum = x+y;
	diff = x-y;
	prod = x*y;
	div = x/y;
	
	cout << "sum:" << sum << "\ndifference:" << diff; 
	return 0;
}