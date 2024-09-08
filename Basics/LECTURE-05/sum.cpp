#include<iostream>
using namespace std;

// Sum function with two inputs
int sum(int a, int b) {
    int sum = a + b;
    return sum;
}

// Main function
int main() {
    // Function calling or invoke
    cout << "Sum of 10 and 20 is : " << sum(10,20);  // The return sum
    /*Either we can print by return or we can directlr print the sum inside the sum()*/

    return 0;
}