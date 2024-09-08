#include<iostream>
using namespace std;

int main() {
    int n = 4;
    
    // TOP
    for(int i  = 0; i<n; i++) {
        for(int j = 0; j<=i; j++) {  // First triangle 
            cout << "*";
        }

        for(int j = 0; j<n-i-1; j++) { // Inverted triangle for spaces 
            cout << " ";
        }

        
        for(int j = i; j<n-1; j++) {   // spaces
            cout << " ";
        }

        for(int j = 0; j<=i; j++) {  // Second triangle 
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}