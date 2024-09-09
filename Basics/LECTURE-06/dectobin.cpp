#include<iostream>
using namespace std;

int decBin(int decNum) {
    int bin =0, pow = 1;

    while(decNum > 0) {
        int r = decNum % 2;   // to get 1 and 0
        decNum /= 2;          // to alter the the next 

        bin += (r * pow);
        pow *= 10;
    }

    return bin;   // Binary form 
}

int main() {
    int decNum = 67;

    cout << decBin(decNum) << endl;
    return 0;
}