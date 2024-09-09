#include<iostream>
using namespace std;

int binDec(int binNum) {
    int dec =0, pow = 1;

    while(binNum > 0) {
        int r = binNum % 10;   // To get last digit 
        dec += (r * pow);
        
        binNum /= 10;
        pow *= 2;
    }

    return dec;   // Decimal form 
}

int main() {
    int binNum = 1000;

    cout << binDec(binNum) << endl;
    return 0;
}
