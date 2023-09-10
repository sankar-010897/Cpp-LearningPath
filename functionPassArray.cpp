#include <iostream>
#include <cmath>
using namespace std;

void squared(int myNumbers[5])
{
  for (int i = 0; i < 5; i++)
  {
    cout << pow(myNumbers[i], 2) << "\n";
  }
}

int main()
{
  int myNumbers[5] = {10, 20, 30, 40, 50};
  squared(myNumbers);
  return 0;
}