#include <iostream>
using namespace std;

void passVal(int a) {   // passing its value
    a = 20;
}

void passRef(int *ptr) {    // Passing its cotainer
    *ptr = 20;              // Changes its content not just the value 
}

int main() {
    int a = 10;

    passVal(a);
    cout << "Pass by value : " << a << endl;

    passRef(&a);
    cout << "Pass by value : " << a << endl;

    return 0;
}