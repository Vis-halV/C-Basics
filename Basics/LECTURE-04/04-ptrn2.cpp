#include<iostream>
using namespace std;

int main() {
    int n = 4;

    for(int i = 0; i<n; i++){   // Outer loop

        char ch = 'A';  // Declaring here makes every line starting again from A
        for(int j =0; j<n; j++){    // Inner loop -> line start
            cout << ch;
            ch = ch + 1; // A = 65; B = 66 >>>>>> Type casting ...
        }

        cout << endl;
    }

    return 0;
}