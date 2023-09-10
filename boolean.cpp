#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    bool isCodingFun = true;
    bool isFishTasty = false;
    cout << isCodingFun;  // Outputs 1 (true)
    cout << "\n" << isFishTasty;  // Outputs 0 (false)
    int x = 10;
    int y = 9;
    cout << "\n" << (x > y); // returns 1 (true), because 10 is higher than 9
    cout << "\n" << (x == 10); // returns 1 (true), because x is equal to 10
    cout << "\n" << (x == 15); // returns 0 (false), because 10 is not equal to 15
    return 0;
}