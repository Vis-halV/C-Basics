#include<iostream>
using namespace std;

void printFibonacci(int n) {
    int a = 0, b = 1;

    cout << "Fibonacci series up to " << n << " terms: ";

    for (int i = 0; i < n; i++) {
        int t;

        cout << a << " ";
        
        t = a + b;
        a = b;
        b = t;
    }

    cout << endl;
}

int main() {
    int n = 10;

    // cout << "Enter the number of terms for the Fibonacci series: ";
    // cin >> n;

    printFibonacci(n);
    
    return 0;
}
