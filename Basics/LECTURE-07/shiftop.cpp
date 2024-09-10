#include<iostream>
using namespace std;

int main() {
    // Shifting operators

    int x = 4;

    cout << "\n\t Shifting operations performed on n = 4\n" << endl;

    cout << "Left shift by 1 bit :  " << (x << 1) << endl;
    cout << "Left shift by 2 bit :  " << (x << 2) << endl;
    cout << "Right shift by 1 bit :  " << (x >> 1) << endl;
    cout << "Right shift by 2 bit :  " << (x >> 2) << endl;


    return 0;
}