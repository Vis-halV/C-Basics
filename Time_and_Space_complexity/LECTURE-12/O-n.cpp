#include <iostream>
using namespace std;

int main() {
    int fact = 1;
    int n = 5;

    /* This loop runs n times lets say factorial of 100 means this loop runs 100 times 
       i.e which gives the time comlpexity of O(n) */

    for(int i = 1; i <= n; i++) {
    fact *= i;
    }
    cout << fact << endl;
    return 0;
}