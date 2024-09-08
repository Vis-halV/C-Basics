#include<iostream>
using namespace std;

int sumn(int n) {
    int sum = 0;

    for(int i = 1; i<=n; i++) {
        sum += i;
    }

    return sum;
}

int main() {
    cout << sumn(5) << endl;
    cout << sumn(10) << endl;

    return 0;
}
