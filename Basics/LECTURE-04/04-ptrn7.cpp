#include<iostream>
using namespace std;

int main() {
    int n = 4;
    char ch = 'A';

    for( int i = 1; i<=n; i++){

        for( int j = 1; j<=i; j++){
            cout << ch  << " ";
        }
        
        cout << endl;
        ch = ch + 1;
    }

    return 0;
}


