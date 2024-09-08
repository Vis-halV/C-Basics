#include<iostream>
using namespace std;

int mini(int a, int b) {    // Parameters
    if(a<b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    cout << "Minimum of 5 and 3 is : " << mini(5,3) << endl;  // Aurguments are passed to the parameters

    return 0;
}