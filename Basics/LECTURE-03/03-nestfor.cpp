#include<iostream>
using namespace std;

int main() {
    int n = 4;    // Global variable 

    for(int i=1 ; i<=n; i++) {
        int m =4; // Local variable

        for(int j=1; j<=n; j++) {
            cout << "*";
        }
        cout << endl;
    }

    

    return 0;
}