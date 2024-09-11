#include <iostream>

using namespace std;

bool isPowerOfTwo(unsigned int num) {
    if (num == 0) {
        return false;
    }
    while (num > 1) {  // To make the value one digit and we get the last 
        if (num & 1) {
            return false;
        }
        num >>= 1;
    }
    return true;
}

int main() {
    unsigned int num = 2048;
    
    if (isPowerOfTwo(num)) {
        cout << num << " is a power of 2." << endl;
    } else {
        cout << num << " is not a power of 2." << endl;
    }

    return 0;
}
