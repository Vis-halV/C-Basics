#include<iostream>
using namespace std;

int main() {
    int n = 4;

    // TOP
    for( int i = 0; i<n; i++) {
        for( int j = 0; j<n-i-1; j++){   // Spaces
            cout << "  ";
        }

        cout << "*";                    // Stars

        /*to get two stars in every line except the first*/

        if(i != 0){   
            for( int j = 0; j<2*i-1; j++){   // Spaces
            cout << "  ";
            }        

             cout << "*";
        }

        cout << endl;

    }

    return 0;
}