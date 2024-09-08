#include<iostream>
using namespace std;

// Function definition
int printhello() {      // It has no aruguments 
    cout << "Hello\n";
    return 5;
}

// Main function
int main() {
    // Function calling or invoke
    int val = printhello();  // The return value 5 is stored in val 
    cout << "Value returned : " << val << endl;

    return 0;
}