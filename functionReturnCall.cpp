#include <iostream>
using namespace std;

int incrementByFive(int x) {
  return 5 + x;
}

int sumOfTwo(int x, int y) {
	return x + y;
}

int main() {
  cout << incrementByFive(3);
  //directly printing function call
  cout << "\n" << sumOfTwo(4,5);
  // storing result of function to a variable
  int z = sumOfTwo(3,4);
  cout << "\n" << z;
  return 0;
}
