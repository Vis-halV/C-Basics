#include<iostream>
using namespace std;

int main() {
    int n = 3;
    int x = 1;

    for(int i = 0; i<n; i++){

        for(int j =1; j<=n; j++){  
            cout << x << " ";
            x++;
        }

        /*Global x is incremented in every loop is also effected in the global scope*/

        cout << endl;
    }

    return 0;
}