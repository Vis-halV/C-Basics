#include<iostream>
using namespace std;

int sumDigits(int num) {
    int digit = 0;

    while(num > 0) {
        int lastDigit = num % 10;
        num /= 10;

        digit += lastDigit;
    }

    return digit;
}
int main() {
    cout << "Sum =" << sumDigits(1234) << endl; 

    return 0;
}