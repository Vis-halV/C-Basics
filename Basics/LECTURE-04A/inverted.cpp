#include<iostream>
using namespace std;

int main() {
    int n = 4;

    for( int i = 0; i < n; i++){
        
        for( int j = 0; j < i; j++){   // Loop for spaces
            cout << " ";
        }
        /*using j again is because after that loop it gets terminated .*/
        
        for( int j = 0; j < n-i; j++){ //Loop for numbers
            cout << (i+1);
        }

        cout << endl;
    }
}