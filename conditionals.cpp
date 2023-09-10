#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    int y = 18;
    int x;
    
    cout << "Enter a number:";
    cin >> x;
    
    if (x > y) {
      cout << "\nx is greater than y";
    }
    else if (x < y){
      cout << "\nnx is less than y";
    }
    else {
      cout << "\nx is equal to y";
    }
    
    return 0;
}