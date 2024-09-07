#include <iostream>
using namespace std;

int main() {
    int n = 4;

    for (int i = 0; i <= n; i++) {
        for (int j = i; j > 0; j--) {
            cout << char('A' + j - 1) << " ";  
        }
        cout << endl;  
    }

    return 0;
}
