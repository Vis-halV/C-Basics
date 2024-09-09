#include<iostream>
using namespace std;

int main() {
    int num = 100;  

    cout << "Prime numbers between 1 to " << num << ": ";

    for (int i = 2; i <= num; i++) {
        int j;
        // i is prime or not 
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                break;  // i is not a prime number
            }
        }

        if (j > i / 2) {
            // i is a prime number
            cout << i << " ";
        }
    }

    cout << endl;
    return 0;
}
