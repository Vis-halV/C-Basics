#include<iostream>
using namespace std;

int main() {
    int n = 3;

    for(int i = 1; i<=n; i++){    // outer loop for columns

        for(int j =1; j<=n; j++){ // inner loop for rows
            cout << "*" << " ";
        }

        cout << endl;
    }

    return 0;
}