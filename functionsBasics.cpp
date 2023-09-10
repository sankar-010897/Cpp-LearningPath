#include <iostream>
using namespace std;

// Function must be declared before the main function
// In void myFunction() { everything before the parenthesis is called function declaration
void myFunction()
{
  cout << "Just executed my first function!"; // Everything under the parenthesis is called function definition
}
void newFunction();

int main()
{
  myFunction(); // call the function, functions are reusable can be called multiple times
  cout << "\nCalling the function a secod time\n";
  myFunction();
  cout << "\n";
  newFunction();
  return 0;
}

void newFunction()
{
  cout << "This function was declared before the main function, but defined after the main function.";
}