#include <iostream>
using namespace std;

void mySiblings(string fname, int age) {
  cout << fname << " Murthy. " << age << " years old. \n";
}

int main() {
  mySiblings("Gomathi", 9);
  mySiblings("Sankara", 25);
  mySiblings("Janaky", 26);
  return 0;
}