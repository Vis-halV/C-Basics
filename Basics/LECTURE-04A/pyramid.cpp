#include<iostream>
using namespace std;

int main() {
    int n = 4;

    for( int i = 0; i<n; i++){                  // For n numbers of rows
        for( int j = n - i - 1; j>0; j--) {     // Loop for spaces 
            cout << " ";
        }
        for( int j = 1; j <= i + 1; j++) {      // Loop for first half numbers
            cout << j;
        }
        for(int j = i; j > 0; j--) {           // Loop for seconf half numbers
            cout << j;
        }
        cout << endl;
    }

    return 0;
}