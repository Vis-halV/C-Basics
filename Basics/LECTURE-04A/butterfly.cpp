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

    for(int i  = 0; i<n-1; i++) {
        for(int j = i; j<n-1; j++) {   // Stars
            cout << "*";
        }

        for(int j = 0; j<=i; j++) {  // Inverted spaces
            cout << " ";
        }

        
        for(int j = 0; j<=i; j++) {  // Spaces
            cout << " ";
        }

        for(int j = 0; j<n-i-1; j++) { // Inverted triangle for stars
            cout << "*";
        }

        cout << endl;
    }

    /*Once you finish the top half you can rreuse the triangular block of code again for the bottom
      By replacing in different block of tri*/

    return 0;
}