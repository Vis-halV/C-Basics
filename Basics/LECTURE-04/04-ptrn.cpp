#include<iostream>
using namespace std;

int main() {
    int n = 4;

    for(int i = 1; i<=n; i++){    // outer loop for columns

        int x = 1;
        for(int j =1; j<=n; j++){ // inner loop for rows
            cout << x;
            x++;
        }

        cout << endl;
    }

    return 0;
}