#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    cout << "Hello, to math functions.";
    // max and min functions
    cout << "\nmax function gives the max. For eg max(10,5) gives: " <<max(10, 5);
    cout << "\nmin function gives the min. For eg min(10,5) gives: " <<min(10, 5);
    //exponential functions
    cout << "\nSqrt function. Eg sqrt(9): " << sqrt(9);
    cout << "\nexp(x) gives e^x value. for eg. exp(2): "<< exp(2);
    cout << "\nexpm1(x)	returns (e^x -1). eg: expm1(2): " << expm1(2);
    cout << "\ncbrt(x) returns cube root. eg: cbrt(64): " << cbrt(64);
    // other functions
    cout << "\ncmath library has other math functions including trignometric, logaruthamic, rounding off, etc..";
    return 0;
}