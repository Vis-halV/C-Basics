#include<iostream>
using namespace std;

int main() {
    int n;

    for(int i = 1; i<=n; i++){    // outer loop for columns

        for(int j =1; j<=n; j++){
            cout << "*";
        }

        cout << endl;
    }
}