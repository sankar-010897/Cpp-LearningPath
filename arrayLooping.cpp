#include <iostream>
using namespace std;

int main() {
	// USING LOOPS TO ACCESS ENTIRE ARRAY
	string cars[5] = {"Toyota", "BMW", "Ferrari", "Suzuki", "Tesla"};
	// ACCESSIGN ARRAY USING ELEMENT'S INDEX
	for (int i = 0; i < 5; i++) {
		cout << cars[i] << "\n";
	}
	
	for (int i = 0; i < 5; i++) {
		cout << i << " = " << cars[i] << "\n";
	}
	
	// ACCESING ARRAYUSING FOR EACH LOOP
	for (string brands: cars){
		cout << brands << "\n";
	}
	return 0;
}